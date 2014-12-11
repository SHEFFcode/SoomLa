//
//  ExampleAssets.h
//  HelloWorld2
//
//  Created by Yuriy Shefer on 12/10/14.
//
//

#ifndef __HelloWorld2__ExampleAssets__
#define __HelloWorld2__ExampleAssets__

#include <stdio.h>
#include "CCStoreAssets.h"
#include "cocos2d.h"

class ExampleAssets: public soomla::CCStoreAssets {
    
    cocos2d::Array *mCurrencies;
    cocos2d::Array *mGoods;
    cocos2d::Array *mCurrencyPacks;
    cocos2d::Array *mCategories;
    
public:
    ExampleAssets():
    mCurrencies(NULL),
    mGoods(NULL),
    mCurrencyPacks(NULL),
    mCategories(NULL)
    {}
    
    virtual ~ExampleAssets();
    
    static ExampleAssets *create();
    bool init();
    
    virtual int getVersion();
    
    virtual cocos2d::CCArray *getCurrencies();
    
    virtual cocos2d::CCArray *getGoods();
    
    virtual cocos2d::CCArray *getCurrencyPacks();
    
    virtual cocos2d::CCArray *getCategories();
};
#endif /* defined(__HelloWorld2__ExampleAssets__) */
