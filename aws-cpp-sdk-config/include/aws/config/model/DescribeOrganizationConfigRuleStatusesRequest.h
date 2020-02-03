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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class AWS_CONFIGSERVICE_API DescribeOrganizationConfigRuleStatusesRequest : public ConfigServiceRequest
  {
  public:
    DescribeOrganizationConfigRuleStatusesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeOrganizationConfigRuleStatuses"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The names of organization config rules for which you want status details. If
     * you do not specify any names, AWS Config returns details for all your
     * organization AWS Confg rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationConfigRuleNames() const{ return m_organizationConfigRuleNames; }

    /**
     * <p>The names of organization config rules for which you want status details. If
     * you do not specify any names, AWS Config returns details for all your
     * organization AWS Confg rules.</p>
     */
    inline bool OrganizationConfigRuleNamesHasBeenSet() const { return m_organizationConfigRuleNamesHasBeenSet; }

    /**
     * <p>The names of organization config rules for which you want status details. If
     * you do not specify any names, AWS Config returns details for all your
     * organization AWS Confg rules.</p>
     */
    inline void SetOrganizationConfigRuleNames(const Aws::Vector<Aws::String>& value) { m_organizationConfigRuleNamesHasBeenSet = true; m_organizationConfigRuleNames = value; }

    /**
     * <p>The names of organization config rules for which you want status details. If
     * you do not specify any names, AWS Config returns details for all your
     * organization AWS Confg rules.</p>
     */
    inline void SetOrganizationConfigRuleNames(Aws::Vector<Aws::String>&& value) { m_organizationConfigRuleNamesHasBeenSet = true; m_organizationConfigRuleNames = std::move(value); }

    /**
     * <p>The names of organization config rules for which you want status details. If
     * you do not specify any names, AWS Config returns details for all your
     * organization AWS Confg rules.</p>
     */
    inline DescribeOrganizationConfigRuleStatusesRequest& WithOrganizationConfigRuleNames(const Aws::Vector<Aws::String>& value) { SetOrganizationConfigRuleNames(value); return *this;}

    /**
     * <p>The names of organization config rules for which you want status details. If
     * you do not specify any names, AWS Config returns details for all your
     * organization AWS Confg rules.</p>
     */
    inline DescribeOrganizationConfigRuleStatusesRequest& WithOrganizationConfigRuleNames(Aws::Vector<Aws::String>&& value) { SetOrganizationConfigRuleNames(std::move(value)); return *this;}

    /**
     * <p>The names of organization config rules for which you want status details. If
     * you do not specify any names, AWS Config returns details for all your
     * organization AWS Confg rules.</p>
     */
    inline DescribeOrganizationConfigRuleStatusesRequest& AddOrganizationConfigRuleNames(const Aws::String& value) { m_organizationConfigRuleNamesHasBeenSet = true; m_organizationConfigRuleNames.push_back(value); return *this; }

    /**
     * <p>The names of organization config rules for which you want status details. If
     * you do not specify any names, AWS Config returns details for all your
     * organization AWS Confg rules.</p>
     */
    inline DescribeOrganizationConfigRuleStatusesRequest& AddOrganizationConfigRuleNames(Aws::String&& value) { m_organizationConfigRuleNamesHasBeenSet = true; m_organizationConfigRuleNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of organization config rules for which you want status details. If
     * you do not specify any names, AWS Config returns details for all your
     * organization AWS Confg rules.</p>
     */
    inline DescribeOrganizationConfigRuleStatusesRequest& AddOrganizationConfigRuleNames(const char* value) { m_organizationConfigRuleNamesHasBeenSet = true; m_organizationConfigRuleNames.push_back(value); return *this; }


    /**
     * <p>The maximum number of <code>OrganizationConfigRuleStatuses</code> returned on
     * each page. If you do no specify a number, AWS Config uses the default. The
     * default is 100.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of <code>OrganizationConfigRuleStatuses</code> returned on
     * each page. If you do no specify a number, AWS Config uses the default. The
     * default is 100.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of <code>OrganizationConfigRuleStatuses</code> returned on
     * each page. If you do no specify a number, AWS Config uses the default. The
     * default is 100.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of <code>OrganizationConfigRuleStatuses</code> returned on
     * each page. If you do no specify a number, AWS Config uses the default. The
     * default is 100.</p>
     */
    inline DescribeOrganizationConfigRuleStatusesRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline DescribeOrganizationConfigRuleStatusesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline DescribeOrganizationConfigRuleStatusesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline DescribeOrganizationConfigRuleStatusesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_organizationConfigRuleNames;
    bool m_organizationConfigRuleNamesHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
