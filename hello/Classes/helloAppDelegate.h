//
//  helloAppDelegate.h
//  hello
//
//  Created by calvin on 6/13/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class helloViewController;

@interface helloAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    helloViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet helloViewController *viewController;

@end

