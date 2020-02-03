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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/CertificateState.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Information about the certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/Certificate">AWS API
   * Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API Certificate
  {
  public:
    Certificate();
    Certificate(Aws::Utils::Json::JsonView jsonValue);
    Certificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the certificate.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::move(value); }

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline Certificate& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline Certificate& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline Certificate& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}


    /**
     * <p>The state of the certificate.</p>
     */
    inline const CertificateState& GetState() const{ return m_state; }

    /**
     * <p>The state of the certificate.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the certificate.</p>
     */
    inline void SetState(const CertificateState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the certificate.</p>
     */
    inline void SetState(CertificateState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the certificate.</p>
     */
    inline Certificate& WithState(const CertificateState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the certificate.</p>
     */
    inline Certificate& WithState(CertificateState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Describes a state change for the certificate.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>Describes a state change for the certificate.</p>
     */
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }

    /**
     * <p>Describes a state change for the certificate.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>Describes a state change for the certificate.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }

    /**
     * <p>Describes a state change for the certificate.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }

    /**
     * <p>Describes a state change for the certificate.</p>
     */
    inline Certificate& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>Describes a state change for the certificate.</p>
     */
    inline Certificate& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>Describes a state change for the certificate.</p>
     */
    inline Certificate& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>The common name for the certificate.</p>
     */
    inline const Aws::String& GetCommonName() const{ return m_commonName; }

    /**
     * <p>The common name for the certificate.</p>
     */
    inline bool CommonNameHasBeenSet() const { return m_commonNameHasBeenSet; }

    /**
     * <p>The common name for the certificate.</p>
     */
    inline void SetCommonName(const Aws::String& value) { m_commonNameHasBeenSet = true; m_commonName = value; }

    /**
     * <p>The common name for the certificate.</p>
     */
    inline void SetCommonName(Aws::String&& value) { m_commonNameHasBeenSet = true; m_commonName = std::move(value); }

    /**
     * <p>The common name for the certificate.</p>
     */
    inline void SetCommonName(const char* value) { m_commonNameHasBeenSet = true; m_commonName.assign(value); }

    /**
     * <p>The common name for the certificate.</p>
     */
    inline Certificate& WithCommonName(const Aws::String& value) { SetCommonName(value); return *this;}

    /**
     * <p>The common name for the certificate.</p>
     */
    inline Certificate& WithCommonName(Aws::String&& value) { SetCommonName(std::move(value)); return *this;}

    /**
     * <p>The common name for the certificate.</p>
     */
    inline Certificate& WithCommonName(const char* value) { SetCommonName(value); return *this;}


    /**
     * <p>The date and time that the certificate was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredDateTime() const{ return m_registeredDateTime; }

    /**
     * <p>The date and time that the certificate was registered.</p>
     */
    inline bool RegisteredDateTimeHasBeenSet() const { return m_registeredDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the certificate was registered.</p>
     */
    inline void SetRegisteredDateTime(const Aws::Utils::DateTime& value) { m_registeredDateTimeHasBeenSet = true; m_registeredDateTime = value; }

    /**
     * <p>The date and time that the certificate was registered.</p>
     */
    inline void SetRegisteredDateTime(Aws::Utils::DateTime&& value) { m_registeredDateTimeHasBeenSet = true; m_registeredDateTime = std::move(value); }

    /**
     * <p>The date and time that the certificate was registered.</p>
     */
    inline Certificate& WithRegisteredDateTime(const Aws::Utils::DateTime& value) { SetRegisteredDateTime(value); return *this;}

    /**
     * <p>The date and time that the certificate was registered.</p>
     */
    inline Certificate& WithRegisteredDateTime(Aws::Utils::DateTime&& value) { SetRegisteredDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the certificate will expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryDateTime() const{ return m_expiryDateTime; }

    /**
     * <p>The date and time when the certificate will expire.</p>
     */
    inline bool ExpiryDateTimeHasBeenSet() const { return m_expiryDateTimeHasBeenSet; }

    /**
     * <p>The date and time when the certificate will expire.</p>
     */
    inline void SetExpiryDateTime(const Aws::Utils::DateTime& value) { m_expiryDateTimeHasBeenSet = true; m_expiryDateTime = value; }

    /**
     * <p>The date and time when the certificate will expire.</p>
     */
    inline void SetExpiryDateTime(Aws::Utils::DateTime&& value) { m_expiryDateTimeHasBeenSet = true; m_expiryDateTime = std::move(value); }

    /**
     * <p>The date and time when the certificate will expire.</p>
     */
    inline Certificate& WithExpiryDateTime(const Aws::Utils::DateTime& value) { SetExpiryDateTime(value); return *this;}

    /**
     * <p>The date and time when the certificate will expire.</p>
     */
    inline Certificate& WithExpiryDateTime(Aws::Utils::DateTime&& value) { SetExpiryDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet;

    CertificateState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet;

    Aws::String m_commonName;
    bool m_commonNameHasBeenSet;

    Aws::Utils::DateTime m_registeredDateTime;
    bool m_registeredDateTimeHasBeenSet;

    Aws::Utils::DateTime m_expiryDateTime;
    bool m_expiryDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
