}
else
return false;
}
if(s[i]=='}') {
if(!st.empty() && st.top()=='{'){
st.pop();
}
else
return false;
}
if(s[i]==']') {
if(!st.empty() && st.top()=='['){
st.pop();
}
else
return false;
}
}
if(st.empty())
return true;
else
return false;
}
};
```