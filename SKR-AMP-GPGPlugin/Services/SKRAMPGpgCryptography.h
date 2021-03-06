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
- (BOOL)canSignWithMail: (NSString *)email;
- (NSString *) encryptMessage: (NSString *)message
                    withEmail: (NSString *)sender
                forRecipients: (NSArray *)recipients
         withHiddenRecipients: (NSArray *)hiddenRecipients;
- (NSString *) signMessage: (NSString *)message
                 withEmail: (NSString *)sender;
- (NSData *) decryptData: (NSData *)data;
- (BOOL) verifySignature: (NSData *)signature
                 forData: (NSData *)data
                 byEmail: (NSString *)email;
@end
