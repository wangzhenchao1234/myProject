//
//  ModifyGroupNameController.h
//  msgcopy
//
//  Created by wngzc on 15/7/10.
//  Copyright (c) 2015年 wngzc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GroupEditeController;

typedef NS_ENUM(NSInteger,MsgGroupEditeType) {
    
    MsgGroupEditeTypeAdd,
    MsgGroupEditeTypeModifyName

};

@interface ModifyGroupController : UITableViewController
@property(nonatomic,assign)MsgGroupEditeType type;
@property(nonatomic,weak)GroupEditeController *pushController;
@property(nonatomic,retain)ArticleGroupEntity *group;
@end
