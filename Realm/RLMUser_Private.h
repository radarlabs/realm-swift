////////////////////////////////////////////////////////////////////////////
//
// Copyright 2016 Realm Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
////////////////////////////////////////////////////////////////////////////

#import "RLMUser.h"

#import "shared_realm.hpp"

@interface RLMUser ()

NS_ASSUME_NONNULL_BEGIN

@property (nullable, nonatomic) RLMServerToken refreshToken;

/**
 Register a Realm to a user.
 
 @param fileURL     The location of the file on disk where the local copy of the Realm will be saved.
 @param realmURL    The fully qualified, unresolved URL of the remote Realm on the Realm Object Server.
 @param completion  An optional completion block.
 */
- (void)_registerRealmForBindingWithFileURL:(NSURL *)fileURL
                                   realmURL:(NSURL *)realmURL
                               onCompletion:(nullable RLMErrorReportingBlock)completion;

NS_ASSUME_NONNULL_END

@end