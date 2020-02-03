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

#include <aws/cloudfront/model/OriginSslProtocols.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

OriginSslProtocols::OriginSslProtocols() : 
    m_quantity(0),
    m_quantityHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

OriginSslProtocols::OriginSslProtocols(const XmlNode& xmlNode) : 
    m_quantity(0),
    m_quantityHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
  *this = xmlNode;
}

OriginSslProtocols& OriginSslProtocols::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode quantityNode = resultNode.FirstChild("Quantity");
    if(!quantityNode.IsNull())
    {
      m_quantity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(quantityNode.GetText()).c_str()).c_str());
      m_quantityHasBeenSet = true;
    }
    XmlNode itemsNode = resultNode.FirstChild("Items");
    if(!itemsNode.IsNull())
    {
      XmlNode itemsMember = itemsNode.FirstChild("SslProtocol");
      while(!itemsMember.IsNull())
      {
        m_items.push_back(SslProtocolMapper::GetSslProtocolForName(StringUtils::Trim(itemsMember.GetText().c_str())));
        itemsMember = itemsMember.NextNode("SslProtocol");
      }

      m_itemsHasBeenSet = true;
    }
  }

  return *this;
}

void OriginSslProtocols::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_quantityHasBeenSet)
  {
   XmlNode quantityNode = parentNode.CreateChildElement("Quantity");
   ss << m_quantity;
   quantityNode.SetText(ss.str());
   ss.str("");
  }

  if(m_itemsHasBeenSet)
  {
   XmlNode itemsParentNode = parentNode.CreateChildElement("Items");
   for(const auto& item : m_items)
   {
     XmlNode itemsNode = itemsParentNode.CreateChildElement("SslProtocol");
     itemsNode.SetText(SslProtocolMapper::GetNameForSslProtocol(item));
   }
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
