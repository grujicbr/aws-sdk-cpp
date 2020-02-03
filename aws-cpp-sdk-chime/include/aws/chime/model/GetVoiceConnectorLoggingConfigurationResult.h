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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/LoggingConfiguration.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API GetVoiceConnectorLoggingConfigurationResult
  {
  public:
    GetVoiceConnectorLoggingConfigurationResult();
    GetVoiceConnectorLoggingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetVoiceConnectorLoggingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The logging configuration details.</p>
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    /**
     * <p>The logging configuration details.</p>
     */
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfiguration = value; }

    /**
     * <p>The logging configuration details.</p>
     */
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfiguration = std::move(value); }

    /**
     * <p>The logging configuration details.</p>
     */
    inline GetVoiceConnectorLoggingConfigurationResult& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}

    /**
     * <p>The logging configuration details.</p>
     */
    inline GetVoiceConnectorLoggingConfigurationResult& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}

  private:

    LoggingConfiguration m_loggingConfiguration;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
