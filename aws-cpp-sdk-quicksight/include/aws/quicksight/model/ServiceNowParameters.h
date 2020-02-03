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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>ServiceNow parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ServiceNowParameters">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API ServiceNowParameters
  {
  public:
    ServiceNowParameters();
    ServiceNowParameters(Aws::Utils::Json::JsonView jsonValue);
    ServiceNowParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>URL of the base site.</p>
     */
    inline const Aws::String& GetSiteBaseUrl() const{ return m_siteBaseUrl; }

    /**
     * <p>URL of the base site.</p>
     */
    inline bool SiteBaseUrlHasBeenSet() const { return m_siteBaseUrlHasBeenSet; }

    /**
     * <p>URL of the base site.</p>
     */
    inline void SetSiteBaseUrl(const Aws::String& value) { m_siteBaseUrlHasBeenSet = true; m_siteBaseUrl = value; }

    /**
     * <p>URL of the base site.</p>
     */
    inline void SetSiteBaseUrl(Aws::String&& value) { m_siteBaseUrlHasBeenSet = true; m_siteBaseUrl = std::move(value); }

    /**
     * <p>URL of the base site.</p>
     */
    inline void SetSiteBaseUrl(const char* value) { m_siteBaseUrlHasBeenSet = true; m_siteBaseUrl.assign(value); }

    /**
     * <p>URL of the base site.</p>
     */
    inline ServiceNowParameters& WithSiteBaseUrl(const Aws::String& value) { SetSiteBaseUrl(value); return *this;}

    /**
     * <p>URL of the base site.</p>
     */
    inline ServiceNowParameters& WithSiteBaseUrl(Aws::String&& value) { SetSiteBaseUrl(std::move(value)); return *this;}

    /**
     * <p>URL of the base site.</p>
     */
    inline ServiceNowParameters& WithSiteBaseUrl(const char* value) { SetSiteBaseUrl(value); return *this;}

  private:

    Aws::String m_siteBaseUrl;
    bool m_siteBaseUrlHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
