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
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appconfig/model/Validator.h>
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
namespace AppConfig
{
namespace Model
{
  class AWS_APPCONFIG_API GetConfigurationProfileResult
  {
  public:
    GetConfigurationProfileResult();
    GetConfigurationProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetConfigurationProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The application ID.</p>
     */
    inline GetConfigurationProfileResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline GetConfigurationProfileResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline GetConfigurationProfileResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The configuration profile ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The configuration profile ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The configuration profile ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The configuration profile ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The configuration profile ID.</p>
     */
    inline GetConfigurationProfileResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The configuration profile ID.</p>
     */
    inline GetConfigurationProfileResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The configuration profile ID.</p>
     */
    inline GetConfigurationProfileResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the configuration profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline GetConfigurationProfileResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline GetConfigurationProfileResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline GetConfigurationProfileResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The configuration profile description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The configuration profile description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The configuration profile description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The configuration profile description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The configuration profile description.</p>
     */
    inline GetConfigurationProfileResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The configuration profile description.</p>
     */
    inline GetConfigurationProfileResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The configuration profile description.</p>
     */
    inline GetConfigurationProfileResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The URI location of the configuration.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline GetConfigurationProfileResult& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline GetConfigurationProfileResult& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>The URI location of the configuration.</p>
     */
    inline GetConfigurationProfileResult& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified LocationUri.</p>
     */
    inline const Aws::String& GetRetrievalRoleArn() const{ return m_retrievalRoleArn; }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified LocationUri.</p>
     */
    inline void SetRetrievalRoleArn(const Aws::String& value) { m_retrievalRoleArn = value; }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified LocationUri.</p>
     */
    inline void SetRetrievalRoleArn(Aws::String&& value) { m_retrievalRoleArn = std::move(value); }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified LocationUri.</p>
     */
    inline void SetRetrievalRoleArn(const char* value) { m_retrievalRoleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified LocationUri.</p>
     */
    inline GetConfigurationProfileResult& WithRetrievalRoleArn(const Aws::String& value) { SetRetrievalRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified LocationUri.</p>
     */
    inline GetConfigurationProfileResult& WithRetrievalRoleArn(Aws::String&& value) { SetRetrievalRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified LocationUri.</p>
     */
    inline GetConfigurationProfileResult& WithRetrievalRoleArn(const char* value) { SetRetrievalRoleArn(value); return *this;}


    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline const Aws::Vector<Validator>& GetValidators() const{ return m_validators; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline void SetValidators(const Aws::Vector<Validator>& value) { m_validators = value; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline void SetValidators(Aws::Vector<Validator>&& value) { m_validators = std::move(value); }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline GetConfigurationProfileResult& WithValidators(const Aws::Vector<Validator>& value) { SetValidators(value); return *this;}

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline GetConfigurationProfileResult& WithValidators(Aws::Vector<Validator>&& value) { SetValidators(std::move(value)); return *this;}

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline GetConfigurationProfileResult& AddValidators(const Validator& value) { m_validators.push_back(value); return *this; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline GetConfigurationProfileResult& AddValidators(Validator&& value) { m_validators.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationId;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_locationUri;

    Aws::String m_retrievalRoleArn;

    Aws::Vector<Validator> m_validators;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
