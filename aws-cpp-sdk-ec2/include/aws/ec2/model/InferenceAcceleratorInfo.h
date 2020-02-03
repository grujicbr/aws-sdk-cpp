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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InferenceDeviceInfo.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the Inference accelerators for the instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InferenceAcceleratorInfo">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API InferenceAcceleratorInfo
  {
  public:
    InferenceAcceleratorInfo();
    InferenceAcceleratorInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    InferenceAcceleratorInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Describes the Inference accelerators for the instance type.</p>
     */
    inline const Aws::Vector<InferenceDeviceInfo>& GetAccelerators() const{ return m_accelerators; }

    /**
     * <p>Describes the Inference accelerators for the instance type.</p>
     */
    inline bool AcceleratorsHasBeenSet() const { return m_acceleratorsHasBeenSet; }

    /**
     * <p>Describes the Inference accelerators for the instance type.</p>
     */
    inline void SetAccelerators(const Aws::Vector<InferenceDeviceInfo>& value) { m_acceleratorsHasBeenSet = true; m_accelerators = value; }

    /**
     * <p>Describes the Inference accelerators for the instance type.</p>
     */
    inline void SetAccelerators(Aws::Vector<InferenceDeviceInfo>&& value) { m_acceleratorsHasBeenSet = true; m_accelerators = std::move(value); }

    /**
     * <p>Describes the Inference accelerators for the instance type.</p>
     */
    inline InferenceAcceleratorInfo& WithAccelerators(const Aws::Vector<InferenceDeviceInfo>& value) { SetAccelerators(value); return *this;}

    /**
     * <p>Describes the Inference accelerators for the instance type.</p>
     */
    inline InferenceAcceleratorInfo& WithAccelerators(Aws::Vector<InferenceDeviceInfo>&& value) { SetAccelerators(std::move(value)); return *this;}

    /**
     * <p>Describes the Inference accelerators for the instance type.</p>
     */
    inline InferenceAcceleratorInfo& AddAccelerators(const InferenceDeviceInfo& value) { m_acceleratorsHasBeenSet = true; m_accelerators.push_back(value); return *this; }

    /**
     * <p>Describes the Inference accelerators for the instance type.</p>
     */
    inline InferenceAcceleratorInfo& AddAccelerators(InferenceDeviceInfo&& value) { m_acceleratorsHasBeenSet = true; m_accelerators.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<InferenceDeviceInfo> m_accelerators;
    bool m_acceleratorsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
