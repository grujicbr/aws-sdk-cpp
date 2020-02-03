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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuditMitigationActionsTaskTarget.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API StartAuditMitigationActionsTaskRequest : public IoTRequest
  {
  public:
    StartAuditMitigationActionsTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAuditMitigationActionsTask"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the task. You can use this identifier to check the
     * status of the task or to cancel it.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>A unique identifier for the task. You can use this identifier to check the
     * status of the task or to cancel it.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>A unique identifier for the task. You can use this identifier to check the
     * status of the task or to cancel it.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>A unique identifier for the task. You can use this identifier to check the
     * status of the task or to cancel it.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>A unique identifier for the task. You can use this identifier to check the
     * status of the task or to cancel it.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>A unique identifier for the task. You can use this identifier to check the
     * status of the task or to cancel it.</p>
     */
    inline StartAuditMitigationActionsTaskRequest& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>A unique identifier for the task. You can use this identifier to check the
     * status of the task or to cancel it.</p>
     */
    inline StartAuditMitigationActionsTaskRequest& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the task. You can use this identifier to check the
     * status of the task or to cancel it.</p>
     */
    inline StartAuditMitigationActionsTaskRequest& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p>Specifies the audit findings to which the mitigation actions are applied. You
     * can apply them to a type of audit check, to all findings from an audit, or to a
     * speecific set of findings.</p>
     */
    inline const AuditMitigationActionsTaskTarget& GetTarget() const{ return m_target; }

    /**
     * <p>Specifies the audit findings to which the mitigation actions are applied. You
     * can apply them to a type of audit check, to all findings from an audit, or to a
     * speecific set of findings.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>Specifies the audit findings to which the mitigation actions are applied. You
     * can apply them to a type of audit check, to all findings from an audit, or to a
     * speecific set of findings.</p>
     */
    inline void SetTarget(const AuditMitigationActionsTaskTarget& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>Specifies the audit findings to which the mitigation actions are applied. You
     * can apply them to a type of audit check, to all findings from an audit, or to a
     * speecific set of findings.</p>
     */
    inline void SetTarget(AuditMitigationActionsTaskTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>Specifies the audit findings to which the mitigation actions are applied. You
     * can apply them to a type of audit check, to all findings from an audit, or to a
     * speecific set of findings.</p>
     */
    inline StartAuditMitigationActionsTaskRequest& WithTarget(const AuditMitigationActionsTaskTarget& value) { SetTarget(value); return *this;}

    /**
     * <p>Specifies the audit findings to which the mitigation actions are applied. You
     * can apply them to a type of audit check, to all findings from an audit, or to a
     * speecific set of findings.</p>
     */
    inline StartAuditMitigationActionsTaskRequest& WithTarget(AuditMitigationActionsTaskTarget&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>For an audit check, specifies which mitigation actions to apply. Those
     * actions must be defined in your AWS account.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAuditCheckToActionsMapping() const{ return m_auditCheckToActionsMapping; }

    /**
     * <p>For an audit check, specifies which mitigation actions to apply. Those
     * actions must be defined in your AWS account.</p>
     */
    inline bool AuditCheckToActionsMappingHasBeenSet() const { return m_auditCheckToActionsMappingHasBeenSet; }

    /**
     * <p>For an audit check, specifies which mitigation actions to apply. Those
     * actions must be defined in your AWS account.</p>
     */
    inline void SetAuditCheckToActionsMapping(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_auditCheckToActionsMappingHasBeenSet = true; m_auditCheckToActionsMapping = value; }

    /**
     * <p>For an audit check, specifies which mitigation actions to apply. Those
     * actions must be defined in your AWS account.</p>
     */
    inline void SetAuditCheckToActionsMapping(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_auditCheckToActionsMappingHasBeenSet = true; m_auditCheckToActionsMapping = std::move(value); }

    /**
     * <p>For an audit check, specifies which mitigation actions to apply. Those
     * actions must be defined in your AWS account.</p>
     */
    inline StartAuditMitigationActionsTaskRequest& WithAuditCheckToActionsMapping(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetAuditCheckToActionsMapping(value); return *this;}

    /**
     * <p>For an audit check, specifies which mitigation actions to apply. Those
     * actions must be defined in your AWS account.</p>
     */
    inline StartAuditMitigationActionsTaskRequest& WithAuditCheckToActionsMapping(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetAuditCheckToActionsMapping(std::move(value)); return *this;}

    /**
     * <p>For an audit check, specifies which mitigation actions to apply. Those
     * actions must be defined in your AWS account.</p>
     */
    inline StartAuditMitigationActionsTaskRequest& AddAuditCheckToActionsMapping(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_auditCheckToActionsMappingHasBeenSet = true; m_auditCheckToActionsMapping.emplace(key, value); return *this; }

    /**
     * <p>For an audit check, specifies which mitigation actions to apply. Those
     * actions must be defined in your AWS account.</p>
     */
    inline StartAuditMitigationActionsTaskRequest& AddAuditCheckToActionsMapping(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_auditCheckToActionsMappingHasBeenSet = true; m_auditCheckToActionsMapping.emplace(std::move(key), value); return *this; }

    /**
     * <p>For an audit check, specifies which mitigation actions to apply. Those
     * actions must be defined in your AWS account.</p>
     */
    inline StartAuditMitigationActionsTaskRequest& AddAuditCheckToActionsMapping(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_auditCheckToActionsMappingHasBeenSet = true; m_auditCheckToActionsMapping.emplace(key, std::move(value)); return *this; }

    /**
     * <p>For an audit check, specifies which mitigation actions to apply. Those
     * actions must be defined in your AWS account.</p>
     */
    inline StartAuditMitigationActionsTaskRequest& AddAuditCheckToActionsMapping(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_auditCheckToActionsMappingHasBeenSet = true; m_auditCheckToActionsMapping.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>For an audit check, specifies which mitigation actions to apply. Those
     * actions must be defined in your AWS account.</p>
     */
    inline StartAuditMitigationActionsTaskRequest& AddAuditCheckToActionsMapping(const char* key, Aws::Vector<Aws::String>&& value) { m_auditCheckToActionsMappingHasBeenSet = true; m_auditCheckToActionsMapping.emplace(key, std::move(value)); return *this; }

    /**
     * <p>For an audit check, specifies which mitigation actions to apply. Those
     * actions must be defined in your AWS account.</p>
     */
    inline StartAuditMitigationActionsTaskRequest& AddAuditCheckToActionsMapping(const char* key, const Aws::Vector<Aws::String>& value) { m_auditCheckToActionsMappingHasBeenSet = true; m_auditCheckToActionsMapping.emplace(key, value); return *this; }


    /**
     * <p>Each audit mitigation task must have a unique client request token. If you
     * try to start a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, a unique client request token is
     * generated automatically.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Each audit mitigation task must have a unique client request token. If you
     * try to start a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, a unique client request token is
     * generated automatically.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Each audit mitigation task must have a unique client request token. If you
     * try to start a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, a unique client request token is
     * generated automatically.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Each audit mitigation task must have a unique client request token. If you
     * try to start a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, a unique client request token is
     * generated automatically.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Each audit mitigation task must have a unique client request token. If you
     * try to start a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, a unique client request token is
     * generated automatically.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Each audit mitigation task must have a unique client request token. If you
     * try to start a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, a unique client request token is
     * generated automatically.</p>
     */
    inline StartAuditMitigationActionsTaskRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Each audit mitigation task must have a unique client request token. If you
     * try to start a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, a unique client request token is
     * generated automatically.</p>
     */
    inline StartAuditMitigationActionsTaskRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Each audit mitigation task must have a unique client request token. If you
     * try to start a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, a unique client request token is
     * generated automatically.</p>
     */
    inline StartAuditMitigationActionsTaskRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet;

    AuditMitigationActionsTaskTarget m_target;
    bool m_targetHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_auditCheckToActionsMapping;
    bool m_auditCheckToActionsMappingHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
