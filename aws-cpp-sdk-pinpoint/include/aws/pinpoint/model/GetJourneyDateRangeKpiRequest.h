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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class AWS_PINPOINT_API GetJourneyDateRangeKpiRequest : public PinpointRequest
  {
  public:
    GetJourneyDateRangeKpiRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetJourneyDateRangeKpi"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The last date and time to retrieve data for, as part of an inclusive date
     * range that filters the query results. This value should be in extended ISO 8601
     * format, for example: 2019-07-19T00:00:00Z for July 19, 2019 and
     * 2019-07-19T20:00:00Z for 8:00 PM July 19, 2019.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The last date and time to retrieve data for, as part of an inclusive date
     * range that filters the query results. This value should be in extended ISO 8601
     * format, for example: 2019-07-19T00:00:00Z for July 19, 2019 and
     * 2019-07-19T20:00:00Z for 8:00 PM July 19, 2019.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The last date and time to retrieve data for, as part of an inclusive date
     * range that filters the query results. This value should be in extended ISO 8601
     * format, for example: 2019-07-19T00:00:00Z for July 19, 2019 and
     * 2019-07-19T20:00:00Z for 8:00 PM July 19, 2019.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The last date and time to retrieve data for, as part of an inclusive date
     * range that filters the query results. This value should be in extended ISO 8601
     * format, for example: 2019-07-19T00:00:00Z for July 19, 2019 and
     * 2019-07-19T20:00:00Z for 8:00 PM July 19, 2019.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The last date and time to retrieve data for, as part of an inclusive date
     * range that filters the query results. This value should be in extended ISO 8601
     * format, for example: 2019-07-19T00:00:00Z for July 19, 2019 and
     * 2019-07-19T20:00:00Z for 8:00 PM July 19, 2019.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The last date and time to retrieve data for, as part of an inclusive date
     * range that filters the query results. This value should be in extended ISO 8601
     * format, for example: 2019-07-19T00:00:00Z for July 19, 2019 and
     * 2019-07-19T20:00:00Z for 8:00 PM July 19, 2019.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline const Aws::String& GetJourneyId() const{ return m_journeyId; }

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline bool JourneyIdHasBeenSet() const { return m_journeyIdHasBeenSet; }

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline void SetJourneyId(const Aws::String& value) { m_journeyIdHasBeenSet = true; m_journeyId = value; }

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline void SetJourneyId(Aws::String&& value) { m_journeyIdHasBeenSet = true; m_journeyId = std::move(value); }

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline void SetJourneyId(const char* value) { m_journeyIdHasBeenSet = true; m_journeyId.assign(value); }

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithJourneyId(const Aws::String& value) { SetJourneyId(value); return *this;}

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithJourneyId(Aws::String&& value) { SetJourneyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithJourneyId(const char* value) { SetJourneyId(value); return *this;}


    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, to retrieve data for. This value describes the associated metric and
     * consists of two or more terms, which are comprised of lowercase alphanumeric
     * characters, separated by a hyphen. Examples are email-open-rate and
     * successful-delivery-rate. For a list of valid values, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline const Aws::String& GetKpiName() const{ return m_kpiName; }

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, to retrieve data for. This value describes the associated metric and
     * consists of two or more terms, which are comprised of lowercase alphanumeric
     * characters, separated by a hyphen. Examples are email-open-rate and
     * successful-delivery-rate. For a list of valid values, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline bool KpiNameHasBeenSet() const { return m_kpiNameHasBeenSet; }

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, to retrieve data for. This value describes the associated metric and
     * consists of two or more terms, which are comprised of lowercase alphanumeric
     * characters, separated by a hyphen. Examples are email-open-rate and
     * successful-delivery-rate. For a list of valid values, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline void SetKpiName(const Aws::String& value) { m_kpiNameHasBeenSet = true; m_kpiName = value; }

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, to retrieve data for. This value describes the associated metric and
     * consists of two or more terms, which are comprised of lowercase alphanumeric
     * characters, separated by a hyphen. Examples are email-open-rate and
     * successful-delivery-rate. For a list of valid values, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline void SetKpiName(Aws::String&& value) { m_kpiNameHasBeenSet = true; m_kpiName = std::move(value); }

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, to retrieve data for. This value describes the associated metric and
     * consists of two or more terms, which are comprised of lowercase alphanumeric
     * characters, separated by a hyphen. Examples are email-open-rate and
     * successful-delivery-rate. For a list of valid values, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline void SetKpiName(const char* value) { m_kpiNameHasBeenSet = true; m_kpiName.assign(value); }

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, to retrieve data for. This value describes the associated metric and
     * consists of two or more terms, which are comprised of lowercase alphanumeric
     * characters, separated by a hyphen. Examples are email-open-rate and
     * successful-delivery-rate. For a list of valid values, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithKpiName(const Aws::String& value) { SetKpiName(value); return *this;}

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, to retrieve data for. This value describes the associated metric and
     * consists of two or more terms, which are comprised of lowercase alphanumeric
     * characters, separated by a hyphen. Examples are email-open-rate and
     * successful-delivery-rate. For a list of valid values, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithKpiName(Aws::String&& value) { SetKpiName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, to retrieve data for. This value describes the associated metric and
     * consists of two or more terms, which are comprised of lowercase alphanumeric
     * characters, separated by a hyphen. Examples are email-open-rate and
     * successful-delivery-rate. For a list of valid values, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithKpiName(const char* value) { SetKpiName(value); return *this;}


    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is currently not supported for application, campaign,
     * and journey metrics.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is currently not supported for application, campaign,
     * and journey metrics.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is currently not supported for application, campaign,
     * and journey metrics.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is currently not supported for application, campaign,
     * and journey metrics.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is currently not supported for application, campaign,
     * and journey metrics.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is currently not supported for application, campaign,
     * and journey metrics.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is currently not supported for application, campaign,
     * and journey metrics.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is currently not supported for application, campaign,
     * and journey metrics.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is currently not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline const Aws::String& GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is currently not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is currently not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline void SetPageSize(const Aws::String& value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is currently not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline void SetPageSize(Aws::String&& value) { m_pageSizeHasBeenSet = true; m_pageSize = std::move(value); }

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is currently not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline void SetPageSize(const char* value) { m_pageSizeHasBeenSet = true; m_pageSize.assign(value); }

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is currently not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithPageSize(const Aws::String& value) { SetPageSize(value); return *this;}

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is currently not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithPageSize(Aws::String&& value) { SetPageSize(std::move(value)); return *this;}

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is currently not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithPageSize(const char* value) { SetPageSize(value); return *this;}


    /**
     * <p>The first date and time to retrieve data for, as part of an inclusive date
     * range that filters the query results. This value should be in extended ISO 8601
     * format, for example: 2019-07-15T00:00:00Z for July 15, 2019 and
     * 2019-07-15T16:00:00Z for 4:00 PM July 15, 2019.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The first date and time to retrieve data for, as part of an inclusive date
     * range that filters the query results. This value should be in extended ISO 8601
     * format, for example: 2019-07-15T00:00:00Z for July 15, 2019 and
     * 2019-07-15T16:00:00Z for 4:00 PM July 15, 2019.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The first date and time to retrieve data for, as part of an inclusive date
     * range that filters the query results. This value should be in extended ISO 8601
     * format, for example: 2019-07-15T00:00:00Z for July 15, 2019 and
     * 2019-07-15T16:00:00Z for 4:00 PM July 15, 2019.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The first date and time to retrieve data for, as part of an inclusive date
     * range that filters the query results. This value should be in extended ISO 8601
     * format, for example: 2019-07-15T00:00:00Z for July 15, 2019 and
     * 2019-07-15T16:00:00Z for 4:00 PM July 15, 2019.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The first date and time to retrieve data for, as part of an inclusive date
     * range that filters the query results. This value should be in extended ISO 8601
     * format, for example: 2019-07-15T00:00:00Z for July 15, 2019 and
     * 2019-07-15T16:00:00Z for 4:00 PM July 15, 2019.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The first date and time to retrieve data for, as part of an inclusive date
     * range that filters the query results. This value should be in extended ISO 8601
     * format, for example: 2019-07-15T00:00:00Z for July 15, 2019 and
     * 2019-07-15T16:00:00Z for 4:00 PM July 15, 2019.</p>
     */
    inline GetJourneyDateRangeKpiRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_journeyId;
    bool m_journeyIdHasBeenSet;

    Aws::String m_kpiName;
    bool m_kpiNameHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_pageSize;
    bool m_pageSizeHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
