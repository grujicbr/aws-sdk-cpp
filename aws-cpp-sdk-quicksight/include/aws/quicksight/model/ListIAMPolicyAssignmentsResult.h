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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/IAMPolicyAssignmentSummary.h>
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
namespace QuickSight
{
namespace Model
{
  class AWS_QUICKSIGHT_API ListIAMPolicyAssignmentsResult
  {
  public:
    ListIAMPolicyAssignmentsResult();
    ListIAMPolicyAssignmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListIAMPolicyAssignmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information describing the IAM policy assignments.</p>
     */
    inline const Aws::Vector<IAMPolicyAssignmentSummary>& GetIAMPolicyAssignments() const{ return m_iAMPolicyAssignments; }

    /**
     * <p>Information describing the IAM policy assignments.</p>
     */
    inline void SetIAMPolicyAssignments(const Aws::Vector<IAMPolicyAssignmentSummary>& value) { m_iAMPolicyAssignments = value; }

    /**
     * <p>Information describing the IAM policy assignments.</p>
     */
    inline void SetIAMPolicyAssignments(Aws::Vector<IAMPolicyAssignmentSummary>&& value) { m_iAMPolicyAssignments = std::move(value); }

    /**
     * <p>Information describing the IAM policy assignments.</p>
     */
    inline ListIAMPolicyAssignmentsResult& WithIAMPolicyAssignments(const Aws::Vector<IAMPolicyAssignmentSummary>& value) { SetIAMPolicyAssignments(value); return *this;}

    /**
     * <p>Information describing the IAM policy assignments.</p>
     */
    inline ListIAMPolicyAssignmentsResult& WithIAMPolicyAssignments(Aws::Vector<IAMPolicyAssignmentSummary>&& value) { SetIAMPolicyAssignments(std::move(value)); return *this;}

    /**
     * <p>Information describing the IAM policy assignments.</p>
     */
    inline ListIAMPolicyAssignmentsResult& AddIAMPolicyAssignments(const IAMPolicyAssignmentSummary& value) { m_iAMPolicyAssignments.push_back(value); return *this; }

    /**
     * <p>Information describing the IAM policy assignments.</p>
     */
    inline ListIAMPolicyAssignmentsResult& AddIAMPolicyAssignments(IAMPolicyAssignmentSummary&& value) { m_iAMPolicyAssignments.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListIAMPolicyAssignmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListIAMPolicyAssignmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListIAMPolicyAssignmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline ListIAMPolicyAssignmentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline ListIAMPolicyAssignmentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline ListIAMPolicyAssignmentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline ListIAMPolicyAssignmentsResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::Vector<IAMPolicyAssignmentSummary> m_iAMPolicyAssignments;

    Aws::String m_nextToken;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
