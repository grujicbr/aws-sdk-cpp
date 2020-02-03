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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>

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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The type used for enabling software token MFA at the user
   * level.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SoftwareTokenMfaSettingsType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API SoftwareTokenMfaSettingsType
  {
  public:
    SoftwareTokenMfaSettingsType();
    SoftwareTokenMfaSettingsType(Aws::Utils::Json::JsonView jsonValue);
    SoftwareTokenMfaSettingsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether software token MFA is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether software token MFA is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether software token MFA is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether software token MFA is enabled.</p>
     */
    inline SoftwareTokenMfaSettingsType& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Specifies whether software token MFA is the preferred MFA method.</p>
     */
    inline bool GetPreferredMfa() const{ return m_preferredMfa; }

    /**
     * <p>Specifies whether software token MFA is the preferred MFA method.</p>
     */
    inline bool PreferredMfaHasBeenSet() const { return m_preferredMfaHasBeenSet; }

    /**
     * <p>Specifies whether software token MFA is the preferred MFA method.</p>
     */
    inline void SetPreferredMfa(bool value) { m_preferredMfaHasBeenSet = true; m_preferredMfa = value; }

    /**
     * <p>Specifies whether software token MFA is the preferred MFA method.</p>
     */
    inline SoftwareTokenMfaSettingsType& WithPreferredMfa(bool value) { SetPreferredMfa(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    bool m_preferredMfa;
    bool m_preferredMfaHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
