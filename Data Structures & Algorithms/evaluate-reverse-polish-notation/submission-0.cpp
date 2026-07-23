class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;

        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/" ){
                string ops=tokens[i];
                if(tokens[i]=="+"){
                    int sum=0;
                    int digit1=stoi(st.top());
                    st.pop();

                    int digit2=stoi(st.top());
                    st.pop();

                    sum=digit1+digit2;
                    ops=to_string(sum);
                    st.push(ops);
                }else if (tokens[i]=="-"){
                    
                   int diff=0;
                    int digit1=stoi(st.top());
                    st.pop();

                    int digit2=stoi(st.top());
                    st.pop();

                    diff=digit2- digit1;
                    ops=to_string(diff);
                    st.push(ops);


                }else if(tokens[i]=="*"){

                    int product=1;
                    int digit1=stoi(st.top());
                    st.pop();

                    int digit2=stoi(st.top());
                    st.pop();

                    product=digit1*digit2;
                    ops=to_string(product);
                    st.push(ops);

                }else{
                    int divide=1;
                    int digit1=stoi(st.top());
                    st.pop();

                    int digit2=stoi(st.top());
                    st.pop();

                    divide=digit2/digit1;
                    ops=to_string(divide);
                    st.push(ops);
                }
            }else{
                st.push(tokens[i]);
            }

            cout<<st.top()<<" ";
        }
        return stoi(st.top());
    }
};
