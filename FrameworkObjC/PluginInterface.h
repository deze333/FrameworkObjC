//
//  PluginInterface.h
//  FrameworkOne
//
//  Created by Denis Zubkov on 24/1/18.
//  Copyright © 2018 Denis Zubkov. All rights reserved.
//

#ifndef PluginInterface_h
#define PluginInterface_h

// Objective-C version of the protocol
@protocol PluginInterface <NSObject>

@property (nonatomic, copy, readonly, nonnull) NSString *name;

- (void)sayHello;

- (nonnull NSString *)convertString:(nonnull NSString *)string;

@end

#endif /* PluginInterface_h */
