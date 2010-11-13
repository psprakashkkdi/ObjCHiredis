//
//  ObjCHiredis.h
//  ObjCHiredis
//
//  Created by Louis-Philippe on 10-10-15.
//  Copyright (c) 2010 Louis-Philippe Perron.
// 
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//  
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
// 

#import <Foundation/Foundation.h>
#import "hiredis.h"
#import "util.h"
#import "net.h"
#import "async.h"
#import "sds.h"
#import "fmacros.h"

@interface ObjCHiredis : NSObject {
	redisContext * context;
}

+ (id)redis:(NSString*)ipaddress on:(NSNumber*)portnumber;
+ (id)redis;
- (BOOL)connect:(NSString*)ipaddress on:(NSNumber*)portnumber;
- (id)command:(NSString*)command;
- (id)commandArgv:(NSArray*)cargv;

+ (NSString*)rb;

@end
