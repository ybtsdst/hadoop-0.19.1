/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package org.apache.hadoop.hdfs.protocol;

import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;

import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableFactories;
import org.apache.hadoop.io.WritableFactory;

/**
 * This class defines a FileStatus that includes a file's block locations. Only
 * for HDFS.
 */
public class HdfsLocatedFileStatus extends FileStatus {

    static { // register a ctor
        WritableFactories.setFactory(HdfsLocatedFileStatus.class, new WritableFactory() {
            public Writable newInstance() {
                return new HdfsLocatedFileStatus();
            }
        });
    }

    private LocatedBlocks locations;

    public HdfsLocatedFileStatus() {
        this(0, false, 0, 0, 0, 0, null, null, null, null, null);
    }

    /**
     * Constructor
     * 
     * @param stat
     *            a file status
     * @param locations
     *            a file's block locations
     */
    public HdfsLocatedFileStatus(FileStatus stat, LocatedBlocks locations) throws IOException {
        this(stat.getLen(), stat.isDir(), stat.getReplication(), stat.getBlockSize(), stat.getModificationTime(), stat
                .getAccessTime(), stat.getPermission(), stat.getOwner(), stat.getGroup(), stat.getPath(), locations);
    }

    /**
     * Constructor
     * 
     * @param length
     *            a file's length
     * @param isdir
     *            if the path is a directory
     * @param block_replication
     *            the file's replication factor
     * @param blocksize
     *            a file's block size
     * @param modification_time
     *            a file's modification time
     * @param access_time
     *            a file's access time
     * @param permission
     *            a file's permission
     * @param owner
     *            a file's owner
     * @param group
     *            a file's group
     * @param path
     *            the path's qualified name
     * @param locations
     *            a file's block locations
     */
    public HdfsLocatedFileStatus(long length, boolean isdir, int block_replication, long blocksize,
            long modification_time, long access_time, FsPermission permission, String owner, String group, Path path,
            LocatedBlocks locations) {
        super(length, isdir, block_replication, blocksize, modification_time, access_time, permission, owner, group,
                path);
        this.locations = locations;
    }

    // Writable interface
    @Override
    public void readFields(DataInput in) throws IOException {
        super.readFields(in);
        if (!isDir()) {
            locations = new LocatedBlocks();
            locations.readFields(in);
        }

    }

    @Override
    public void write(DataOutput out) throws IOException {
        super.write(out);
        if (!isDir()) {
            locations.write(out);
        }
    }

    /**
     * Get the file's block locations
     * 
     * @return the file's block locations
     */
    public LocatedBlocks getBlockLocations() {
        return locations;
    }

    /**
     * Compare this object to another object
     * 
     * @param o
     *            the object to be compared.
     * @return a negative integer, zero, or a positive integer as this object is
     *         less than, equal to, or greater than the specified object.
     * 
     * @throws ClassCastException
     *             if the specified object's is not of type FileStatus
     */
    public int compareTo(Object o) {
        return super.compareTo(o);
    }

    /**
     * Compare if this object is equal to another object
     * 
     * @param o
     *            the object to be compared.
     * @return true if two file status has the same path name; false if not.
     */
    public boolean equals(Object o) {
        return super.equals(o);
    }

    /**
     * Returns a hash code value for the object, which is defined as the hash
     * code of the path name.
     * 
     * @return a hash code value for the path name.
     */
    public int hashCode() {
        return super.hashCode();
    }
}
