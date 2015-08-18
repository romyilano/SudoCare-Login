//
//  Constants.m
//  ParseStarterProject
//
//  Created by Romy on 6/5/15.
//
//

#import "Constants.h"
#import "SecretKeys.h"

@implementation Constants

NSString *const kParseApplicationId = kSecretParseApplicationId;
NSString *const kParseClientKey = kSecretParseClientKey;
NSString *const kParseRESTAPIKey = kSecretParseRESTAPIKey;
NSString *const kParseMasterKey = kSecretParseMasterKey;

#pragma mark - Storyboard IDS
NSString *const kLoneWolfSTIDLoginNavKey = @"LoneWolfLoginScene";

#pragma mark - Segues

NSString *const kSegueLoginKey = @"LoginSegue";
NSString *const kSegueSignupKey = @"SignupSegue";
NSString *const kSegueProfileKey = @"ProfileSegue";

@end
