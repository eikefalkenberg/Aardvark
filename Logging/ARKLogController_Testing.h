//
//  ARKLogController_Testing.h
//  Aardvark
//
//  Created by Dan Federman on 10/6/14.
//  Copyright (c) 2014 Square, Inc. All rights reserved.
//

@interface ARKLogController (Private)

- (NSMutableArray *)logMessages;
- (NSMutableSet *)logHandlers;
- (NSOperationQueue *)loggingQueue;

- (NSArray *)_persistedLogs;
- (void)_persistLogs_inLoggingQueue;
- (void)_trimLogs_inLoggingQueue;
- (NSArray *)_trimedLogsToPersist_inLoggingQueue;

@end
