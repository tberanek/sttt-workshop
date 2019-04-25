/*
 * Amazon FreeRTOS V1.4.1
 * Copyright (C) 2017 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

#include <stdint.h>

/*
 * PEM-encoded client certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWjCCAkKgAwIBAgIVALHPdsrmBxorCtHWmBZzEOSveFlTMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xOTA0MjUxNjQ4\n"\
"NDhaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDmiLPJHca18xSMhJwe\n"\
"6k+ED17ahzymc29A9LeZCqniJNHpPIWynTcLwuf+8fDxilRgz11gp/vR4qx5VEP3\n"\
"+vP2YkwSmjaFoPrWUda6hFcuYI9wf7G6WvaayNXZVjpDWYvJOpU/vjsYe76xkjN2\n"\
"ZYEhMlf7OgeunJphUC4kP3Zm9Br1NGF4xre9bwPx5axp6ZHtNxrORy3GcqJEk8wM\n"\
"W/ntdHhp79I43mGUfgOPbo1oOli0KZtpgKX3HsrqUBDkviUxqKsKwrDybXVhQYcq\n"\
"YWtUBA20VGphf0yk/SxiUWCkB3aHlpTEevOzirwRFgZEt6FLiNseUcMDwk6ptFPQ\n"\
"5ItnAgMBAAGjYDBeMB8GA1UdIwQYMBaAFBg44Do60uQV8TgMFZouEQdOX68tMB0G\n"\
"A1UdDgQWBBRb8xh9WBX5a26k1MJRWmovlEq57jAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAGGN7Z85j+jeY+ONenVuhKiDb\n"\
"uPlJ3nkLGldk0sXZBHMzeJClCXJYxvz8DKaY0tKCcddoMXaBnUdGGbcJCPwzeYqh\n"\
"FA1KKW0DsotuayLR7tpgfh9VqE1PUpvUYGuhXVlpW9m5pIPvKglfIufaVGfjcL+d\n"\
"xeriTr842Fk59X+aHoD1lPEPRZ6T7WP6ErLibZ5QdcrJ9sgyl635oSEZyIcpQtj6\n"\
"Mo1TcvmRM3w8Kj2bfhOF6gwvv62enYfg1Y+TXydoUOQzUJgGfTd0cCxFxARQMth3\n"\
"nEK5EHU4UfkiNoDOa8joJpe6H0nMTjEa+uqeLs1iNM49XpUA7X2FfjGsqGJ+6Q==\n"\
"-----END CERTIFICATE-----\n"

/*
 * PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 * This is required if you're using JITR, since the issuer (Certificate 
 * Authority) of the client certificate is used by the server for routing the 
 * device's initial request. (The device client certificate must always be 
 * sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html, 
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set below to NULL.
 * 
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  NULL

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEpAIBAAKCAQEA5oizyR3GtfMUjIScHupPhA9e2oc8pnNvQPS3mQqp4iTR6TyF\n"\
"sp03C8Ln/vHw8YpUYM9dYKf70eKseVRD9/rz9mJMEpo2haD61lHWuoRXLmCPcH+x\n"\
"ulr2msjV2VY6Q1mLyTqVP747GHu+sZIzdmWBITJX+zoHrpyaYVAuJD92ZvQa9TRh\n"\
"eMa3vW8D8eWsaemR7TcazkctxnKiRJPMDFv57XR4ae/SON5hlH4Dj26NaDpYtCmb\n"\
"aYCl9x7K6lAQ5L4lMairCsKw8m11YUGHKmFrVAQNtFRqYX9MpP0sYlFgpAd2h5aU\n"\
"xHrzs4q8ERYGRLehS4jbHlHDA8JOqbRT0OSLZwIDAQABAoIBAQCoIMKdxm2JfQJb\n"\
"iMsjcNcVBPC0hzSgYEefI9pSbwh+uUOtyknnfekLVtZDhMeoIK5w/Eqpl1l8NMh8\n"\
"pAv96rPJ2N6KIpXo1wKZE4568NF0LU/vR/Gia3y2Xgo4Oz66p6/ezi7TEjWfIYBt\n"\
"mKaXjmeigkjQG/5GRkgA+KzuGqqLYdFObwjK2SEHdW1wa4zz/kAVEnarah8KGK8W\n"\
"22vGvE24qReFaJzEZ8cbyVqH9kXaqfOdK2VH13EuTypLCVkxhxAy3uRZPEIVv8BO\n"\
"d5LUv6jBUM/lfaDdeszizRVtd9Mz7K3MqVBNfW3itTKG49BUmW9z3x3MvzUhu8y5\n"\
"8/GiHPpBAoGBAPr2bzTkpKrsik3x7tk1BOhxW5D+jzMbG1txdtW7sXUkochVuuni\n"\
"iTraV9uzjlZg4tc9/l1yhOin+FTZJd52y2YnjAIo2aKJQ8xJpmujoJRmkw/A6lHH\n"\
"eZbi4SLcTudTKLLl6iLEuAXGPHuAPZYuKCwwzhEYJpFQZOZp2/7LZXX/AoGBAOsp\n"\
"S7kyv7Z4+dociftWQVfyPC9j8yPjfufJ3aOVgJE6FCNqGKiYH74tsDO4kGu6R4LL\n"\
"a/6uZMcctyMJJ26YXfzLr6gWzc7gcaKsp+8MMURFuQ6gyzi+NbsVlv2TkIkQbR64\n"\
"icaGUZkFei/gMFily1wYW/Szw+AtAe7vZJQP+vqZAoGAC1im8HpB46RsIFgG13Up\n"\
"MqUlYanQqZvZIcpAeCtTO5ubYOZXXAms8Kc8f6dfkRIyT07zOCBcV/R4KsXii2tN\n"\
"iOHS16onJM0V7p+J0aYFNZBpp7WuImJlYegCC8RwIM9GsMfqTQYd18z9oQvMPQT7\n"\
"NfxC5Mz1uW4sEarJknx5qtsCgYEAz7jgnKzJT8O44ANJluvwOGFO7IWbZl4z4Ucd\n"\
"MryCnsXwt/+l3HbTw0fUVzt2xtH7DPvnX0Zo2sDwvE//tt98VisN9KqADXeQqSNe\n"\
"C/h3JFl6SAOcv3i1OZaukztf9tK9sN9NREGtnj+KWPPtgMCiy6zwvUx1f3YCOS7Z\n"\
"ZzheeDECgYAzUYcJ/xvhnGQudEzSZfVA+MrOm3X/HBN3mgbAAUZoh7Oij4HC0jOr\n"\
"WwktoVW5Z6MXaz/xgkc1ymKkrxyY3LaGsjG/ytze/8vVrffwti0a37OOiFK/5JlX\n"\
"BvWBbgeZGfubKztUiAvpwGoygAGQmAMJ0GqZmhSHc21VHF59IqU8IQ==\n"\
"-----END RSA PRIVATE KEY-----\n"

/* The constants above are set to const char * pointers defined in aws_demo_runner.c,
 * and externed here for use in C files.  NOTE!  THIS IS DONE FOR CONVENIENCE
 * DURING AN EVALUATION PHASE AND IS NOT GOOD PRACTICE FOR PRODUCTION SYSTEMS 
 * WHICH MUST STORE KEYS SECURELY. */
extern const char clientcredentialCLIENT_CERTIFICATE_PEM[];
extern const char* clientcredentialJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM;
extern const char clientcredentialCLIENT_PRIVATE_KEY_PEM[];
extern const uint32_t clientcredentialCLIENT_CERTIFICATE_LENGTH;
extern const uint32_t clientcredentialCLIENT_PRIVATE_KEY_LENGTH;

#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
