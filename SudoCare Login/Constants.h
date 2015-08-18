#import <Foundation/Foundation.h>

@interface Constants : NSObject

extern NSString *const kParseApplicationId;
extern NSString *const kParseClientKey;
extern NSString *const kParseRESTAPIKey;
extern NSString *const kParseMasterKey;

#pragma mark - Storyboard IDS
extern NSString *const kLoneWolfSTIDLoginNavKey;

#pragma mark - Segues
extern NSString *const kSegueLoginKey;
extern NSString *const kSegueSignupKey;
extern NSString *const kSegueProfileKey;

@end

typedef NS_ENUM(NSUInteger, RESTAPISource) {
    RESTAPISourceFinalOpenSourceSudoRoom,
    RESTAPISourceParseTemporary
};

typedef NS_ENUM(NSInteger, ParseFetchError)  {
    ParseFetchErrorUserNotLoggedInError,
    ParseFetchErrorNoDataError,
    ParseFetchErrorNetworkCallFailedError,
    ParseFetchErrorBadParameter
};