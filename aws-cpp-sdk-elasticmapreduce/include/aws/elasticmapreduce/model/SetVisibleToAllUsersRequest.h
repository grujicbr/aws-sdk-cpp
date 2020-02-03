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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>The input to the SetVisibleToAllUsers action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SetVisibleToAllUsersInput">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API SetVisibleToAllUsersRequest : public EMRRequest
  {
  public:
    SetVisibleToAllUsersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetVisibleToAllUsers"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the job flow (cluster).</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobFlowIds() const{ return m_jobFlowIds; }

    /**
     * <p>The unique identifier of the job flow (cluster).</p>
     */
    inline bool JobFlowIdsHasBeenSet() const { return m_jobFlowIdsHasBeenSet; }

    /**
     * <p>The unique identifier of the job flow (cluster).</p>
     */
    inline void SetJobFlowIds(const Aws::Vector<Aws::String>& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds = value; }

    /**
     * <p>The unique identifier of the job flow (cluster).</p>
     */
    inline void SetJobFlowIds(Aws::Vector<Aws::String>&& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds = std::move(value); }

    /**
     * <p>The unique identifier of the job flow (cluster).</p>
     */
    inline SetVisibleToAllUsersRequest& WithJobFlowIds(const Aws::Vector<Aws::String>& value) { SetJobFlowIds(value); return *this;}

    /**
     * <p>The unique identifier of the job flow (cluster).</p>
     */
    inline SetVisibleToAllUsersRequest& WithJobFlowIds(Aws::Vector<Aws::String>&& value) { SetJobFlowIds(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the job flow (cluster).</p>
     */
    inline SetVisibleToAllUsersRequest& AddJobFlowIds(const Aws::String& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds.push_back(value); return *this; }

    /**
     * <p>The unique identifier of the job flow (cluster).</p>
     */
    inline SetVisibleToAllUsersRequest& AddJobFlowIds(Aws::String&& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The unique identifier of the job flow (cluster).</p>
     */
    inline SetVisibleToAllUsersRequest& AddJobFlowIds(const char* value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds.push_back(value); return *this; }


    /**
     * <p>A value of <code>true</code> indicates that all IAM users in the AWS account
     * can perform cluster actions if they have the proper IAM policy permissions. This
     * is the default. A value of <code>false</code> indicates that only the IAM user
     * who created the cluster can perform actions.</p>
     */
    inline bool GetVisibleToAllUsers() const{ return m_visibleToAllUsers; }

    /**
     * <p>A value of <code>true</code> indicates that all IAM users in the AWS account
     * can perform cluster actions if they have the proper IAM policy permissions. This
     * is the default. A value of <code>false</code> indicates that only the IAM user
     * who created the cluster can perform actions.</p>
     */
    inline bool VisibleToAllUsersHasBeenSet() const { return m_visibleToAllUsersHasBeenSet; }

    /**
     * <p>A value of <code>true</code> indicates that all IAM users in the AWS account
     * can perform cluster actions if they have the proper IAM policy permissions. This
     * is the default. A value of <code>false</code> indicates that only the IAM user
     * who created the cluster can perform actions.</p>
     */
    inline void SetVisibleToAllUsers(bool value) { m_visibleToAllUsersHasBeenSet = true; m_visibleToAllUsers = value; }

    /**
     * <p>A value of <code>true</code> indicates that all IAM users in the AWS account
     * can perform cluster actions if they have the proper IAM policy permissions. This
     * is the default. A value of <code>false</code> indicates that only the IAM user
     * who created the cluster can perform actions.</p>
     */
    inline SetVisibleToAllUsersRequest& WithVisibleToAllUsers(bool value) { SetVisibleToAllUsers(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_jobFlowIds;
    bool m_jobFlowIdsHasBeenSet;

    bool m_visibleToAllUsers;
    bool m_visibleToAllUsersHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
