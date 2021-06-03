template <typename T>
LinkedList<T> LinkedList<T>::merge(const LinkedList<T>& other) const 
{
  LinkedList<T> left = *this;
  LinkedList<T> right = other;
  
  if (left.empty()) 
	  return right;
  if (right.empty())
	  return left;

  T lValue;
  T rValue;
  T rBack = right.back();
  T lBack = left.back();
  while (right.size() || left.size()) { 
	  if (!left.empty()) {
	  	lValue = left.front();
	  } else
		  lValue = rBack + rBack;
	  if (!right.empty()) {
	  	rValue = right.front();
	  } else
		  rValue = lBack + lBack;
	  if (rValue == lValue) {
		merged.pushBack(rValue);
		merged.pushBack(lValue);
  		left.popFront();
  		right.popFront();
	  } else if (rValue > lValue) {
	  	merged.pushBack(lValue);
 	        left.popFront();	
	  } else if (lValue > rValue) {
	 	merged.pushBack(rValue);
	        right.popFront();
	  }
 }
