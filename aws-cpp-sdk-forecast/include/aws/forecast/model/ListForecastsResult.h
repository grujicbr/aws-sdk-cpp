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
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/ForecastSummary.h>
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
namespace ForecastService
{
namespace Model
{
  class AWS_FORECASTSERVICE_API ListForecastsResult
  {
  public:
    ListForecastsResult();
    ListForecastsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListForecastsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that summarize each forecast's properties.</p>
     */
    inline const Aws::Vector<ForecastSummary>& GetForecasts() const{ return m_forecasts; }

    /**
     * <p>An array of objects that summarize each forecast's properties.</p>
     */
    inline void SetForecasts(const Aws::Vector<ForecastSummary>& value) { m_forecasts = value; }

    /**
     * <p>An array of objects that summarize each forecast's properties.</p>
     */
    inline void SetForecasts(Aws::Vector<ForecastSummary>&& value) { m_forecasts = std::move(value); }

    /**
     * <p>An array of objects that summarize each forecast's properties.</p>
     */
    inline ListForecastsResult& WithForecasts(const Aws::Vector<ForecastSummary>& value) { SetForecasts(value); return *this;}

    /**
     * <p>An array of objects that summarize each forecast's properties.</p>
     */
    inline ListForecastsResult& WithForecasts(Aws::Vector<ForecastSummary>&& value) { SetForecasts(std::move(value)); return *this;}

    /**
     * <p>An array of objects that summarize each forecast's properties.</p>
     */
    inline ListForecastsResult& AddForecasts(const ForecastSummary& value) { m_forecasts.push_back(value); return *this; }

    /**
     * <p>An array of objects that summarize each forecast's properties.</p>
     */
    inline ListForecastsResult& AddForecasts(ForecastSummary&& value) { m_forecasts.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline ListForecastsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline ListForecastsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline ListForecastsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ForecastSummary> m_forecasts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
