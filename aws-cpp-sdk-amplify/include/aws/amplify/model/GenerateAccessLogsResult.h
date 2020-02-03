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
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p> Result structure for the generate access logs request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GenerateAccessLogsResult">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API GenerateAccessLogsResult
  {
  public:
    GenerateAccessLogsResult();
    GenerateAccessLogsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GenerateAccessLogsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Pre-signed URL for the requested access logs. </p>
     */
    inline const Aws::String& GetLogUrl() const{ return m_logUrl; }

    /**
     * <p> Pre-signed URL for the requested access logs. </p>
     */
    inline void SetLogUrl(const Aws::String& value) { m_logUrl = value; }

    /**
     * <p> Pre-signed URL for the requested access logs. </p>
     */
    inline void SetLogUrl(Aws::String&& value) { m_logUrl = std::move(value); }

    /**
     * <p> Pre-signed URL for the requested access logs. </p>
     */
    inline void SetLogUrl(const char* value) { m_logUrl.assign(value); }

    /**
     * <p> Pre-signed URL for the requested access logs. </p>
     */
    inline GenerateAccessLogsResult& WithLogUrl(const Aws::String& value) { SetLogUrl(value); return *this;}

    /**
     * <p> Pre-signed URL for the requested access logs. </p>
     */
    inline GenerateAccessLogsResult& WithLogUrl(Aws::String&& value) { SetLogUrl(std::move(value)); return *this;}

    /**
     * <p> Pre-signed URL for the requested access logs. </p>
     */
    inline GenerateAccessLogsResult& WithLogUrl(const char* value) { SetLogUrl(value); return *this;}

  private:

    Aws::String m_logUrl;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
