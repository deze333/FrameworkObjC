//
//  PluginObjC.h
//  FrameworkObjC
//
//  Created by Denis Zubkov on 24/1/18.
//  Copyright © 2018 Denis Zubkov. All rights reserved.
//

#ifndef PluginObjC_h
#define PluginObjC_h

#import "PluginInterface.h"

@interface PluginObjC : NSObject <PluginInterface>

@property (nonatomic, copy, readonly, nonnull) NSString *name;

- (void)sayHello;
- (nonnull NSString *)convertString:(nonnull NSString *)string;

@end

#endif /* PluginObjC_h */
