class Trie {
    struct trie{
        bool isTerminal=true;
        trie* next[26]={NULL};
    }*start;
public:
    Trie() {
        start=new trie;
    }
    
    void insert(string word) {
        int n=size(word);
        trie *ptr=start;
        for(int i=0;i<n;i++){
            if(ptr->next[word[i]-'a']) {
                ptr=ptr->next[word[i]-'a'];
                if(i==n-1) ptr->isTerminal=true;
            }
            else{
                ptr->next[word[i]-'a']=new trie;
                ptr=ptr->next[word[i]-'a'];
                if(i!=n-1) ptr->isTerminal=false; 
            }
        }
    }
    
    bool search(string word) {
        int n=size(word);
        trie *ptr=start;
        for(int i=0;i<n;i++){
            if(ptr->next[word[i]-'a']){
                ptr=ptr->next[word[i]-'a'];
                if(i==n-1 && ptr->isTerminal) return true;
            }
            else return false;
        }
        return false;
    }
    
    bool startsWith(string prefix) {
        int n=size(prefix);
        trie *ptr=start;
        for(int i=0;i<n;i++){
            if(ptr->next[prefix[i]-'a']){
                ptr=ptr->next[prefix[i]-'a'];
                if(i==n-1) return true;
            }
            else return false;
        }
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
