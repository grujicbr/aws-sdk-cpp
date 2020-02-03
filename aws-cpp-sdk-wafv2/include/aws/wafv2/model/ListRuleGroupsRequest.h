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
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class AWS_WAFV2_API ListRuleGroupsRequest : public WAFV2Request
  {
  public:
    ListRuleGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRuleGroups"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline ListRuleGroupsRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline ListRuleGroupsRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, AWS
     * WAF returns a <code>NextMarker</code> value in the response. To retrieve the
     * next batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, AWS
     * WAF returns a <code>NextMarker</code> value in the response. To retrieve the
     * next batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, AWS
     * WAF returns a <code>NextMarker</code> value in the response. To retrieve the
     * next batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, AWS
     * WAF returns a <code>NextMarker</code> value in the response. To retrieve the
     * next batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, AWS
     * WAF returns a <code>NextMarker</code> value in the response. To retrieve the
     * next batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, AWS
     * WAF returns a <code>NextMarker</code> value in the response. To retrieve the
     * next batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListRuleGroupsRequest& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, AWS
     * WAF returns a <code>NextMarker</code> value in the response. To retrieve the
     * next batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListRuleGroupsRequest& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, AWS
     * WAF returns a <code>NextMarker</code> value in the response. To retrieve the
     * next batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListRuleGroupsRequest& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>The maximum number of objects that you want AWS WAF to return for this
     * request. If more objects are available, in the response, AWS WAF provides a
     * <code>NextMarker</code> value that you can use in a subsequent call to get the
     * next batch of objects.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of objects that you want AWS WAF to return for this
     * request. If more objects are available, in the response, AWS WAF provides a
     * <code>NextMarker</code> value that you can use in a subsequent call to get the
     * next batch of objects.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of objects that you want AWS WAF to return for this
     * request. If more objects are available, in the response, AWS WAF provides a
     * <code>NextMarker</code> value that you can use in a subsequent call to get the
     * next batch of objects.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of objects that you want AWS WAF to return for this
     * request. If more objects are available, in the response, AWS WAF provides a
     * <code>NextMarker</code> value that you can use in a subsequent call to get the
     * next batch of objects.</p>
     */
    inline ListRuleGroupsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Scope m_scope;
    bool m_scopeHasBeenSet;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
