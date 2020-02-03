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
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/Tag.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class AWS_NETWORKMANAGER_API CreateGlobalNetworkRequest : public NetworkManagerRequest
  {
  public:
    CreateGlobalNetworkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGlobalNetwork"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A description of the global network.</p> <p>Length Constraints: Maximum
     * length of 256 characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the global network.</p> <p>Length Constraints: Maximum
     * length of 256 characters.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the global network.</p> <p>Length Constraints: Maximum
     * length of 256 characters.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the global network.</p> <p>Length Constraints: Maximum
     * length of 256 characters.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the global network.</p> <p>Length Constraints: Maximum
     * length of 256 characters.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the global network.</p> <p>Length Constraints: Maximum
     * length of 256 characters.</p>
     */
    inline CreateGlobalNetworkRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the global network.</p> <p>Length Constraints: Maximum
     * length of 256 characters.</p>
     */
    inline CreateGlobalNetworkRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the global network.</p> <p>Length Constraints: Maximum
     * length of 256 characters.</p>
     */
    inline CreateGlobalNetworkRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline CreateGlobalNetworkRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline CreateGlobalNetworkRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline CreateGlobalNetworkRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline CreateGlobalNetworkRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
