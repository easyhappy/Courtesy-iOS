//
//  CourtesyCardPreviewStyleManager.h
//  Courtesy
//
//  Created by Zheng on 5/3/16.
//  Copyright © 2016 82Flex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CourtesyCardPreviewStyleModel.h"

@interface CourtesyCardPreviewStyleManager : NSObject
@property (nonatomic, strong) NSArray <NSString *> *previewNames;
@property (nonatomic, strong) NSArray <UIImage *> *previewImages;
@property (nonatomic, strong) NSArray <UIImage *> *previewCheckmarks;

+ (id)sharedManager;
- (CourtesyCardPreviewStyleModel *)previewStyleWithType:(CourtesyCardPreviewStyleType)type;
@end
