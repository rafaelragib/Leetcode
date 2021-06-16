function generateParenthesis(n: number): string[] {
    let ans:string[]=[];
   function helper(s:string,l:number,r:number){
    if(l==0 && r==0){
        ans.push(s);
        return;
    }
        
    if(l>0)
        helper(s+'(',l-1,r);
    if(r>l && r>0)
        helper(s+')',l,r-1);
}
  helper('',n,n);
    return ans;
};