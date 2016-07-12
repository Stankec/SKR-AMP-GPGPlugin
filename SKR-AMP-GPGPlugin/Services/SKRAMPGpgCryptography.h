//
//  Cryptography.h
//  SKR-AMP-GPGPlugin
//
//  Created by Stanko Krtalic Rusendic on 11/07/16.
//  Copyright © 2016 Monorkin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Libmacgpg/Libmacgpg.h>

@interface SKRAMPGpgCryptography : NSObject

- (BOOL)canEncryptForMail: (NSString *)email;

@end
