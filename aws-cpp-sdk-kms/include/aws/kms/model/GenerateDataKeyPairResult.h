﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/DataKeyPairSpec.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{
  class AWS_KMS_API GenerateDataKeyPairResult
  {
  public:
    GenerateDataKeyPairResult();
    GenerateDataKeyPairResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GenerateDataKeyPairResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The encrypted copy of the private key. When you use the HTTP API or the AWS
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPrivateKeyCiphertextBlob() const{ return m_privateKeyCiphertextBlob; }

    /**
     * <p>The encrypted copy of the private key. When you use the HTTP API or the AWS
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline void SetPrivateKeyCiphertextBlob(const Aws::Utils::ByteBuffer& value) { m_privateKeyCiphertextBlob = value; }

    /**
     * <p>The encrypted copy of the private key. When you use the HTTP API or the AWS
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline void SetPrivateKeyCiphertextBlob(Aws::Utils::ByteBuffer&& value) { m_privateKeyCiphertextBlob = std::move(value); }

    /**
     * <p>The encrypted copy of the private key. When you use the HTTP API or the AWS
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline GenerateDataKeyPairResult& WithPrivateKeyCiphertextBlob(const Aws::Utils::ByteBuffer& value) { SetPrivateKeyCiphertextBlob(value); return *this;}

    /**
     * <p>The encrypted copy of the private key. When you use the HTTP API or the AWS
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline GenerateDataKeyPairResult& WithPrivateKeyCiphertextBlob(Aws::Utils::ByteBuffer&& value) { SetPrivateKeyCiphertextBlob(std::move(value)); return *this;}


    /**
     * <p>The plaintext copy of the private key. When you use the HTTP API or the AWS
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPrivateKeyPlaintext() const{ return m_privateKeyPlaintext; }

    /**
     * <p>The plaintext copy of the private key. When you use the HTTP API or the AWS
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline void SetPrivateKeyPlaintext(const Aws::Utils::CryptoBuffer& value) { m_privateKeyPlaintext = value; }

    /**
     * <p>The plaintext copy of the private key. When you use the HTTP API or the AWS
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline void SetPrivateKeyPlaintext(Aws::Utils::CryptoBuffer&& value) { m_privateKeyPlaintext = std::move(value); }

    /**
     * <p>The plaintext copy of the private key. When you use the HTTP API or the AWS
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline GenerateDataKeyPairResult& WithPrivateKeyPlaintext(const Aws::Utils::CryptoBuffer& value) { SetPrivateKeyPlaintext(value); return *this;}

    /**
     * <p>The plaintext copy of the private key. When you use the HTTP API or the AWS
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline GenerateDataKeyPairResult& WithPrivateKeyPlaintext(Aws::Utils::CryptoBuffer&& value) { SetPrivateKeyPlaintext(std::move(value)); return *this;}


    /**
     * <p>The public key (in plaintext).</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPublicKey() const{ return m_publicKey; }

    /**
     * <p>The public key (in plaintext).</p>
     */
    inline void SetPublicKey(const Aws::Utils::ByteBuffer& value) { m_publicKey = value; }

    /**
     * <p>The public key (in plaintext).</p>
     */
    inline void SetPublicKey(Aws::Utils::ByteBuffer&& value) { m_publicKey = std::move(value); }

    /**
     * <p>The public key (in plaintext).</p>
     */
    inline GenerateDataKeyPairResult& WithPublicKey(const Aws::Utils::ByteBuffer& value) { SetPublicKey(value); return *this;}

    /**
     * <p>The public key (in plaintext).</p>
     */
    inline GenerateDataKeyPairResult& WithPublicKey(Aws::Utils::ByteBuffer&& value) { SetPublicKey(std::move(value)); return *this;}


    /**
     * <p>The identifier of the CMK that encrypted the private key.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The identifier of the CMK that encrypted the private key.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>The identifier of the CMK that encrypted the private key.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>The identifier of the CMK that encrypted the private key.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>The identifier of the CMK that encrypted the private key.</p>
     */
    inline GenerateDataKeyPairResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The identifier of the CMK that encrypted the private key.</p>
     */
    inline GenerateDataKeyPairResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the CMK that encrypted the private key.</p>
     */
    inline GenerateDataKeyPairResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The type of data key pair that was generated.</p>
     */
    inline const DataKeyPairSpec& GetKeyPairSpec() const{ return m_keyPairSpec; }

    /**
     * <p>The type of data key pair that was generated.</p>
     */
    inline void SetKeyPairSpec(const DataKeyPairSpec& value) { m_keyPairSpec = value; }

    /**
     * <p>The type of data key pair that was generated.</p>
     */
    inline void SetKeyPairSpec(DataKeyPairSpec&& value) { m_keyPairSpec = std::move(value); }

    /**
     * <p>The type of data key pair that was generated.</p>
     */
    inline GenerateDataKeyPairResult& WithKeyPairSpec(const DataKeyPairSpec& value) { SetKeyPairSpec(value); return *this;}

    /**
     * <p>The type of data key pair that was generated.</p>
     */
    inline GenerateDataKeyPairResult& WithKeyPairSpec(DataKeyPairSpec&& value) { SetKeyPairSpec(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_privateKeyCiphertextBlob;

    Aws::Utils::CryptoBuffer m_privateKeyPlaintext;

    Aws::Utils::ByteBuffer m_publicKey;

    Aws::String m_keyId;

    DataKeyPairSpec m_keyPairSpec;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
