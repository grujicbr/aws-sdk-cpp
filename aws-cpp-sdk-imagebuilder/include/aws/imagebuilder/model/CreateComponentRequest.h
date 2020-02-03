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
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/Platform.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class AWS_IMAGEBUILDER_API CreateComponentRequest : public ImagebuilderRequest
  {
  public:
    CreateComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateComponent"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the component.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline CreateComponentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline CreateComponentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline CreateComponentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The semantic version of the component. This version to follow the semantic
     * version syntax. i.e. major.minor.patch. This could be versioned like software
     * 2.0.1 or date like 2019.12.01.</p>
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }

    /**
     * <p>The semantic version of the component. This version to follow the semantic
     * version syntax. i.e. major.minor.patch. This could be versioned like software
     * 2.0.1 or date like 2019.12.01.</p>
     */
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }

    /**
     * <p>The semantic version of the component. This version to follow the semantic
     * version syntax. i.e. major.minor.patch. This could be versioned like software
     * 2.0.1 or date like 2019.12.01.</p>
     */
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }

    /**
     * <p>The semantic version of the component. This version to follow the semantic
     * version syntax. i.e. major.minor.patch. This could be versioned like software
     * 2.0.1 or date like 2019.12.01.</p>
     */
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }

    /**
     * <p>The semantic version of the component. This version to follow the semantic
     * version syntax. i.e. major.minor.patch. This could be versioned like software
     * 2.0.1 or date like 2019.12.01.</p>
     */
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }

    /**
     * <p>The semantic version of the component. This version to follow the semantic
     * version syntax. i.e. major.minor.patch. This could be versioned like software
     * 2.0.1 or date like 2019.12.01.</p>
     */
    inline CreateComponentRequest& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * <p>The semantic version of the component. This version to follow the semantic
     * version syntax. i.e. major.minor.patch. This could be versioned like software
     * 2.0.1 or date like 2019.12.01.</p>
     */
    inline CreateComponentRequest& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * <p>The semantic version of the component. This version to follow the semantic
     * version syntax. i.e. major.minor.patch. This could be versioned like software
     * 2.0.1 or date like 2019.12.01.</p>
     */
    inline CreateComponentRequest& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}


    /**
     * <p>CThe description of the component. Describes the contents of the
     * component.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>CThe description of the component. Describes the contents of the
     * component.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>CThe description of the component. Describes the contents of the
     * component.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>CThe description of the component. Describes the contents of the
     * component.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>CThe description of the component. Describes the contents of the
     * component.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>CThe description of the component. Describes the contents of the
     * component.</p>
     */
    inline CreateComponentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>CThe description of the component. Describes the contents of the
     * component.</p>
     */
    inline CreateComponentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>CThe description of the component. Describes the contents of the
     * component.</p>
     */
    inline CreateComponentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>CThe change description of the component. Describes what change has been made
     * in this version. In other words what makes this version different from other
     * versions of this component.</p>
     */
    inline const Aws::String& GetChangeDescription() const{ return m_changeDescription; }

    /**
     * <p>CThe change description of the component. Describes what change has been made
     * in this version. In other words what makes this version different from other
     * versions of this component.</p>
     */
    inline bool ChangeDescriptionHasBeenSet() const { return m_changeDescriptionHasBeenSet; }

    /**
     * <p>CThe change description of the component. Describes what change has been made
     * in this version. In other words what makes this version different from other
     * versions of this component.</p>
     */
    inline void SetChangeDescription(const Aws::String& value) { m_changeDescriptionHasBeenSet = true; m_changeDescription = value; }

    /**
     * <p>CThe change description of the component. Describes what change has been made
     * in this version. In other words what makes this version different from other
     * versions of this component.</p>
     */
    inline void SetChangeDescription(Aws::String&& value) { m_changeDescriptionHasBeenSet = true; m_changeDescription = std::move(value); }

    /**
     * <p>CThe change description of the component. Describes what change has been made
     * in this version. In other words what makes this version different from other
     * versions of this component.</p>
     */
    inline void SetChangeDescription(const char* value) { m_changeDescriptionHasBeenSet = true; m_changeDescription.assign(value); }

    /**
     * <p>CThe change description of the component. Describes what change has been made
     * in this version. In other words what makes this version different from other
     * versions of this component.</p>
     */
    inline CreateComponentRequest& WithChangeDescription(const Aws::String& value) { SetChangeDescription(value); return *this;}

    /**
     * <p>CThe change description of the component. Describes what change has been made
     * in this version. In other words what makes this version different from other
     * versions of this component.</p>
     */
    inline CreateComponentRequest& WithChangeDescription(Aws::String&& value) { SetChangeDescription(std::move(value)); return *this;}

    /**
     * <p>CThe change description of the component. Describes what change has been made
     * in this version. In other words what makes this version different from other
     * versions of this component.</p>
     */
    inline CreateComponentRequest& WithChangeDescription(const char* value) { SetChangeDescription(value); return *this;}


    /**
     * <p>CThe platform of the component.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p>CThe platform of the component.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>CThe platform of the component.</p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>CThe platform of the component.</p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>CThe platform of the component.</p>
     */
    inline CreateComponentRequest& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p>CThe platform of the component.</p>
     */
    inline CreateComponentRequest& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>CThe data of the component.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>CThe data of the component.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>CThe data of the component.</p>
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>CThe data of the component.</p>
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>CThe data of the component.</p>
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * <p>CThe data of the component.</p>
     */
    inline CreateComponentRequest& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>CThe data of the component.</p>
     */
    inline CreateComponentRequest& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>CThe data of the component.</p>
     */
    inline CreateComponentRequest& WithData(const char* value) { SetData(value); return *this;}


    /**
     * <p>CThe uri of the component.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>CThe uri of the component.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>CThe uri of the component.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>CThe uri of the component.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>CThe uri of the component.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>CThe uri of the component.</p>
     */
    inline CreateComponentRequest& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>CThe uri of the component.</p>
     */
    inline CreateComponentRequest& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>CThe uri of the component.</p>
     */
    inline CreateComponentRequest& WithUri(const char* value) { SetUri(value); return *this;}


    /**
     * <p>The ID of the KMS key that should be used to encrypt this component.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the KMS key that should be used to encrypt this component.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the KMS key that should be used to encrypt this component.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the KMS key that should be used to encrypt this component.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the KMS key that should be used to encrypt this component.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the KMS key that should be used to encrypt this component.</p>
     */
    inline CreateComponentRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the KMS key that should be used to encrypt this component.</p>
     */
    inline CreateComponentRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS key that should be used to encrypt this component.</p>
     */
    inline CreateComponentRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>CThe tags of the component.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>CThe tags of the component.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>CThe tags of the component.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>CThe tags of the component.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>CThe tags of the component.</p>
     */
    inline CreateComponentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>CThe tags of the component.</p>
     */
    inline CreateComponentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>CThe tags of the component.</p>
     */
    inline CreateComponentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>CThe tags of the component.</p>
     */
    inline CreateComponentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>CThe tags of the component.</p>
     */
    inline CreateComponentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>CThe tags of the component.</p>
     */
    inline CreateComponentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>CThe tags of the component.</p>
     */
    inline CreateComponentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>CThe tags of the component.</p>
     */
    inline CreateComponentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>CThe tags of the component.</p>
     */
    inline CreateComponentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>CThe idempotency token of the component.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>CThe idempotency token of the component.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>CThe idempotency token of the component.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>CThe idempotency token of the component.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>CThe idempotency token of the component.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>CThe idempotency token of the component.</p>
     */
    inline CreateComponentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>CThe idempotency token of the component.</p>
     */
    inline CreateComponentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>CThe idempotency token of the component.</p>
     */
    inline CreateComponentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_changeDescription;
    bool m_changeDescriptionHasBeenSet;

    Platform m_platform;
    bool m_platformHasBeenSet;

    Aws::String m_data;
    bool m_dataHasBeenSet;

    Aws::String m_uri;
    bool m_uriHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
