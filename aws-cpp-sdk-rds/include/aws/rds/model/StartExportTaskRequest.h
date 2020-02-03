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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API StartExportTaskRequest : public RDSRequest
  {
  public:
    StartExportTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartExportTask"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A unique identifier for the snapshot export task. This ID isn't an identifier
     * for the Amazon S3 bucket where the snapshot is to be exported to. </p>
     */
    inline const Aws::String& GetExportTaskIdentifier() const{ return m_exportTaskIdentifier; }

    /**
     * <p>A unique identifier for the snapshot export task. This ID isn't an identifier
     * for the Amazon S3 bucket where the snapshot is to be exported to. </p>
     */
    inline bool ExportTaskIdentifierHasBeenSet() const { return m_exportTaskIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the snapshot export task. This ID isn't an identifier
     * for the Amazon S3 bucket where the snapshot is to be exported to. </p>
     */
    inline void SetExportTaskIdentifier(const Aws::String& value) { m_exportTaskIdentifierHasBeenSet = true; m_exportTaskIdentifier = value; }

    /**
     * <p>A unique identifier for the snapshot export task. This ID isn't an identifier
     * for the Amazon S3 bucket where the snapshot is to be exported to. </p>
     */
    inline void SetExportTaskIdentifier(Aws::String&& value) { m_exportTaskIdentifierHasBeenSet = true; m_exportTaskIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the snapshot export task. This ID isn't an identifier
     * for the Amazon S3 bucket where the snapshot is to be exported to. </p>
     */
    inline void SetExportTaskIdentifier(const char* value) { m_exportTaskIdentifierHasBeenSet = true; m_exportTaskIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the snapshot export task. This ID isn't an identifier
     * for the Amazon S3 bucket where the snapshot is to be exported to. </p>
     */
    inline StartExportTaskRequest& WithExportTaskIdentifier(const Aws::String& value) { SetExportTaskIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the snapshot export task. This ID isn't an identifier
     * for the Amazon S3 bucket where the snapshot is to be exported to. </p>
     */
    inline StartExportTaskRequest& WithExportTaskIdentifier(Aws::String&& value) { SetExportTaskIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the snapshot export task. This ID isn't an identifier
     * for the Amazon S3 bucket where the snapshot is to be exported to. </p>
     */
    inline StartExportTaskRequest& WithExportTaskIdentifier(const char* value) { SetExportTaskIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to export to Amazon S3.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to export to Amazon S3.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to export to Amazon S3.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to export to Amazon S3.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to export to Amazon S3.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to export to Amazon S3.</p>
     */
    inline StartExportTaskRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to export to Amazon S3.</p>
     */
    inline StartExportTaskRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to export to Amazon S3.</p>
     */
    inline StartExportTaskRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket to export the snapshot to.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the Amazon S3 bucket to export the snapshot to.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket to export the snapshot to.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket to export the snapshot to.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket to export the snapshot to.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket to export the snapshot to.</p>
     */
    inline StartExportTaskRequest& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket to export the snapshot to.</p>
     */
    inline StartExportTaskRequest& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket to export the snapshot to.</p>
     */
    inline StartExportTaskRequest& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The name of the IAM role to use for writing to the Amazon S3 bucket when
     * exporting a snapshot. </p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The name of the IAM role to use for writing to the Amazon S3 bucket when
     * exporting a snapshot. </p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The name of the IAM role to use for writing to the Amazon S3 bucket when
     * exporting a snapshot. </p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The name of the IAM role to use for writing to the Amazon S3 bucket when
     * exporting a snapshot. </p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The name of the IAM role to use for writing to the Amazon S3 bucket when
     * exporting a snapshot. </p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The name of the IAM role to use for writing to the Amazon S3 bucket when
     * exporting a snapshot. </p>
     */
    inline StartExportTaskRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The name of the IAM role to use for writing to the Amazon S3 bucket when
     * exporting a snapshot. </p>
     */
    inline StartExportTaskRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM role to use for writing to the Amazon S3 bucket when
     * exporting a snapshot. </p>
     */
    inline StartExportTaskRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>The ID of the AWS KMS key to use to encrypt the snapshot exported to Amazon
     * S3. The KMS key ID is the Amazon Resource Name (ARN), the KMS key identifier, or
     * the KMS key alias for the KMS encryption key. The IAM role used for the snapshot
     * export must have encryption and decryption permissions to use this KMS key. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the AWS KMS key to use to encrypt the snapshot exported to Amazon
     * S3. The KMS key ID is the Amazon Resource Name (ARN), the KMS key identifier, or
     * the KMS key alias for the KMS encryption key. The IAM role used for the snapshot
     * export must have encryption and decryption permissions to use this KMS key. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the AWS KMS key to use to encrypt the snapshot exported to Amazon
     * S3. The KMS key ID is the Amazon Resource Name (ARN), the KMS key identifier, or
     * the KMS key alias for the KMS encryption key. The IAM role used for the snapshot
     * export must have encryption and decryption permissions to use this KMS key. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the AWS KMS key to use to encrypt the snapshot exported to Amazon
     * S3. The KMS key ID is the Amazon Resource Name (ARN), the KMS key identifier, or
     * the KMS key alias for the KMS encryption key. The IAM role used for the snapshot
     * export must have encryption and decryption permissions to use this KMS key. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the AWS KMS key to use to encrypt the snapshot exported to Amazon
     * S3. The KMS key ID is the Amazon Resource Name (ARN), the KMS key identifier, or
     * the KMS key alias for the KMS encryption key. The IAM role used for the snapshot
     * export must have encryption and decryption permissions to use this KMS key. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the AWS KMS key to use to encrypt the snapshot exported to Amazon
     * S3. The KMS key ID is the Amazon Resource Name (ARN), the KMS key identifier, or
     * the KMS key alias for the KMS encryption key. The IAM role used for the snapshot
     * export must have encryption and decryption permissions to use this KMS key. </p>
     */
    inline StartExportTaskRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the AWS KMS key to use to encrypt the snapshot exported to Amazon
     * S3. The KMS key ID is the Amazon Resource Name (ARN), the KMS key identifier, or
     * the KMS key alias for the KMS encryption key. The IAM role used for the snapshot
     * export must have encryption and decryption permissions to use this KMS key. </p>
     */
    inline StartExportTaskRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS KMS key to use to encrypt the snapshot exported to Amazon
     * S3. The KMS key ID is the Amazon Resource Name (ARN), the KMS key identifier, or
     * the KMS key alias for the KMS encryption key. The IAM role used for the snapshot
     * export must have encryption and decryption permissions to use this KMS key. </p>
     */
    inline StartExportTaskRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The Amazon S3 bucket prefix to use as the file name and path of the exported
     * snapshot.</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }

    /**
     * <p>The Amazon S3 bucket prefix to use as the file name and path of the exported
     * snapshot.</p>
     */
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket prefix to use as the file name and path of the exported
     * snapshot.</p>
     */
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }

    /**
     * <p>The Amazon S3 bucket prefix to use as the file name and path of the exported
     * snapshot.</p>
     */
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::move(value); }

    /**
     * <p>The Amazon S3 bucket prefix to use as the file name and path of the exported
     * snapshot.</p>
     */
    inline void SetS3Prefix(const char* value) { m_s3PrefixHasBeenSet = true; m_s3Prefix.assign(value); }

    /**
     * <p>The Amazon S3 bucket prefix to use as the file name and path of the exported
     * snapshot.</p>
     */
    inline StartExportTaskRequest& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}

    /**
     * <p>The Amazon S3 bucket prefix to use as the file name and path of the exported
     * snapshot.</p>
     */
    inline StartExportTaskRequest& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket prefix to use as the file name and path of the exported
     * snapshot.</p>
     */
    inline StartExportTaskRequest& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}


    /**
     * <p>The data to be exported from the snapshot. If this parameter is not provided,
     * all the snapshot data is exported. Valid values are the following:</p> <ul> <li>
     * <p> <code>database</code> - Export all the data of the snapshot.</p> </li> <li>
     * <p> <code>database.table [table-name]</code> - Export a table of the
     * snapshot.</p> </li> <li> <p> <code>database.schema [schema-name]</code> - Export
     * a database schema of the snapshot. This value isn't valid for RDS for MySQL, RDS
     * for MariaDB, or Aurora MySQL.</p> </li> <li> <p> <code>database.schema.table
     * [table-name]</code> - Export a table of the database schema. This value isn't
     * valid for RDS for MySQL, RDS for MariaDB, or Aurora MySQL.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetExportOnly() const{ return m_exportOnly; }

    /**
     * <p>The data to be exported from the snapshot. If this parameter is not provided,
     * all the snapshot data is exported. Valid values are the following:</p> <ul> <li>
     * <p> <code>database</code> - Export all the data of the snapshot.</p> </li> <li>
     * <p> <code>database.table [table-name]</code> - Export a table of the
     * snapshot.</p> </li> <li> <p> <code>database.schema [schema-name]</code> - Export
     * a database schema of the snapshot. This value isn't valid for RDS for MySQL, RDS
     * for MariaDB, or Aurora MySQL.</p> </li> <li> <p> <code>database.schema.table
     * [table-name]</code> - Export a table of the database schema. This value isn't
     * valid for RDS for MySQL, RDS for MariaDB, or Aurora MySQL.</p> </li> </ul>
     */
    inline bool ExportOnlyHasBeenSet() const { return m_exportOnlyHasBeenSet; }

    /**
     * <p>The data to be exported from the snapshot. If this parameter is not provided,
     * all the snapshot data is exported. Valid values are the following:</p> <ul> <li>
     * <p> <code>database</code> - Export all the data of the snapshot.</p> </li> <li>
     * <p> <code>database.table [table-name]</code> - Export a table of the
     * snapshot.</p> </li> <li> <p> <code>database.schema [schema-name]</code> - Export
     * a database schema of the snapshot. This value isn't valid for RDS for MySQL, RDS
     * for MariaDB, or Aurora MySQL.</p> </li> <li> <p> <code>database.schema.table
     * [table-name]</code> - Export a table of the database schema. This value isn't
     * valid for RDS for MySQL, RDS for MariaDB, or Aurora MySQL.</p> </li> </ul>
     */
    inline void SetExportOnly(const Aws::Vector<Aws::String>& value) { m_exportOnlyHasBeenSet = true; m_exportOnly = value; }

    /**
     * <p>The data to be exported from the snapshot. If this parameter is not provided,
     * all the snapshot data is exported. Valid values are the following:</p> <ul> <li>
     * <p> <code>database</code> - Export all the data of the snapshot.</p> </li> <li>
     * <p> <code>database.table [table-name]</code> - Export a table of the
     * snapshot.</p> </li> <li> <p> <code>database.schema [schema-name]</code> - Export
     * a database schema of the snapshot. This value isn't valid for RDS for MySQL, RDS
     * for MariaDB, or Aurora MySQL.</p> </li> <li> <p> <code>database.schema.table
     * [table-name]</code> - Export a table of the database schema. This value isn't
     * valid for RDS for MySQL, RDS for MariaDB, or Aurora MySQL.</p> </li> </ul>
     */
    inline void SetExportOnly(Aws::Vector<Aws::String>&& value) { m_exportOnlyHasBeenSet = true; m_exportOnly = std::move(value); }

    /**
     * <p>The data to be exported from the snapshot. If this parameter is not provided,
     * all the snapshot data is exported. Valid values are the following:</p> <ul> <li>
     * <p> <code>database</code> - Export all the data of the snapshot.</p> </li> <li>
     * <p> <code>database.table [table-name]</code> - Export a table of the
     * snapshot.</p> </li> <li> <p> <code>database.schema [schema-name]</code> - Export
     * a database schema of the snapshot. This value isn't valid for RDS for MySQL, RDS
     * for MariaDB, or Aurora MySQL.</p> </li> <li> <p> <code>database.schema.table
     * [table-name]</code> - Export a table of the database schema. This value isn't
     * valid for RDS for MySQL, RDS for MariaDB, or Aurora MySQL.</p> </li> </ul>
     */
    inline StartExportTaskRequest& WithExportOnly(const Aws::Vector<Aws::String>& value) { SetExportOnly(value); return *this;}

    /**
     * <p>The data to be exported from the snapshot. If this parameter is not provided,
     * all the snapshot data is exported. Valid values are the following:</p> <ul> <li>
     * <p> <code>database</code> - Export all the data of the snapshot.</p> </li> <li>
     * <p> <code>database.table [table-name]</code> - Export a table of the
     * snapshot.</p> </li> <li> <p> <code>database.schema [schema-name]</code> - Export
     * a database schema of the snapshot. This value isn't valid for RDS for MySQL, RDS
     * for MariaDB, or Aurora MySQL.</p> </li> <li> <p> <code>database.schema.table
     * [table-name]</code> - Export a table of the database schema. This value isn't
     * valid for RDS for MySQL, RDS for MariaDB, or Aurora MySQL.</p> </li> </ul>
     */
    inline StartExportTaskRequest& WithExportOnly(Aws::Vector<Aws::String>&& value) { SetExportOnly(std::move(value)); return *this;}

    /**
     * <p>The data to be exported from the snapshot. If this parameter is not provided,
     * all the snapshot data is exported. Valid values are the following:</p> <ul> <li>
     * <p> <code>database</code> - Export all the data of the snapshot.</p> </li> <li>
     * <p> <code>database.table [table-name]</code> - Export a table of the
     * snapshot.</p> </li> <li> <p> <code>database.schema [schema-name]</code> - Export
     * a database schema of the snapshot. This value isn't valid for RDS for MySQL, RDS
     * for MariaDB, or Aurora MySQL.</p> </li> <li> <p> <code>database.schema.table
     * [table-name]</code> - Export a table of the database schema. This value isn't
     * valid for RDS for MySQL, RDS for MariaDB, or Aurora MySQL.</p> </li> </ul>
     */
    inline StartExportTaskRequest& AddExportOnly(const Aws::String& value) { m_exportOnlyHasBeenSet = true; m_exportOnly.push_back(value); return *this; }

    /**
     * <p>The data to be exported from the snapshot. If this parameter is not provided,
     * all the snapshot data is exported. Valid values are the following:</p> <ul> <li>
     * <p> <code>database</code> - Export all the data of the snapshot.</p> </li> <li>
     * <p> <code>database.table [table-name]</code> - Export a table of the
     * snapshot.</p> </li> <li> <p> <code>database.schema [schema-name]</code> - Export
     * a database schema of the snapshot. This value isn't valid for RDS for MySQL, RDS
     * for MariaDB, or Aurora MySQL.</p> </li> <li> <p> <code>database.schema.table
     * [table-name]</code> - Export a table of the database schema. This value isn't
     * valid for RDS for MySQL, RDS for MariaDB, or Aurora MySQL.</p> </li> </ul>
     */
    inline StartExportTaskRequest& AddExportOnly(Aws::String&& value) { m_exportOnlyHasBeenSet = true; m_exportOnly.push_back(std::move(value)); return *this; }

    /**
     * <p>The data to be exported from the snapshot. If this parameter is not provided,
     * all the snapshot data is exported. Valid values are the following:</p> <ul> <li>
     * <p> <code>database</code> - Export all the data of the snapshot.</p> </li> <li>
     * <p> <code>database.table [table-name]</code> - Export a table of the
     * snapshot.</p> </li> <li> <p> <code>database.schema [schema-name]</code> - Export
     * a database schema of the snapshot. This value isn't valid for RDS for MySQL, RDS
     * for MariaDB, or Aurora MySQL.</p> </li> <li> <p> <code>database.schema.table
     * [table-name]</code> - Export a table of the database schema. This value isn't
     * valid for RDS for MySQL, RDS for MariaDB, or Aurora MySQL.</p> </li> </ul>
     */
    inline StartExportTaskRequest& AddExportOnly(const char* value) { m_exportOnlyHasBeenSet = true; m_exportOnly.push_back(value); return *this; }

  private:

    Aws::String m_exportTaskIdentifier;
    bool m_exportTaskIdentifierHasBeenSet;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet;

    Aws::Vector<Aws::String> m_exportOnly;
    bool m_exportOnlyHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
