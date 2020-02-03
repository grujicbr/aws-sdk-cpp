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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/ReportStatusType.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p> A filter used to return reports with the status specified by the input
   * <code>status</code> parameter. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ReportFilter">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API ReportFilter
  {
  public:
    ReportFilter();
    ReportFilter(Aws::Utils::Json::JsonView jsonValue);
    ReportFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The status used to filter reports. You can filter using one status only.
     * </p>
     */
    inline const ReportStatusType& GetStatus() const{ return m_status; }

    /**
     * <p> The status used to filter reports. You can filter using one status only.
     * </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status used to filter reports. You can filter using one status only.
     * </p>
     */
    inline void SetStatus(const ReportStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status used to filter reports. You can filter using one status only.
     * </p>
     */
    inline void SetStatus(ReportStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status used to filter reports. You can filter using one status only.
     * </p>
     */
    inline ReportFilter& WithStatus(const ReportStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p> The status used to filter reports. You can filter using one status only.
     * </p>
     */
    inline ReportFilter& WithStatus(ReportStatusType&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ReportStatusType m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
