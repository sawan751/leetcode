    users['name'] = users['name'].str.capitalize()
    df = users[['user_id','name']].sort_values('user_id',ascending = True)
    return df