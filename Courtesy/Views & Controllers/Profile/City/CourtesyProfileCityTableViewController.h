//
//  CourtesyProfileCityTableViewController.h
//  Courtesy
//
//  Created by Zheng on 2/26/16.
//  Copyright © 2016 82Flex. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CourtesyProfileCityTableViewController : UITableViewController
+ (NSString *)generateCityStringWithState:(NSString *)state
                                  andCity:(NSString *)city
                           andSubLocality:(NSString *)subLocality;

@end
