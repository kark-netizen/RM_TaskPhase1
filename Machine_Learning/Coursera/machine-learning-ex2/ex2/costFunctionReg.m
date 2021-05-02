function [J, grad] = costFunctionReg(theta, X, y, lambda)
%COSTFUNCTIONREG Compute cost and gradient for logistic regression with regularization
%   J = COSTFUNCTIONREG(theta, X, y, lambda) computes the cost of using
%   theta as the parameter for regularized logistic regression and the
%   gradient of the cost w.r.t. to the parameters. 

% Initialize some useful values
m = length(y); % number of training examples

% You need to return the following variables correctly 
J = 0;
grad = zeros(size(theta));

% ====================== YOUR CODE HERE ======================
% Instructions: Compute the cost of a particular choice of theta.
%               You should set J to the cost.
%               Compute the partial derivatives and set grad to the partial
%               derivatives of the cost w.r.t. each parameter in theta
hx=sigmoid(X*theta);
J=-y'*log(hx)-(1-y)'*log(1-hx)+(theta(2:end,:)'*theta(2:end,:))*lambda*0.5;
J=J/(m); %actual cost
%it is important to remember that we do not regularize the first value of theta
%this is the reason i wrote theta(2:end,:)
% it means to take theta from 2nd row to last row while keeping all the coloumns

grad=X'*(hx-y);%vector implementation to calculate gradient
grad(2:end,:)=grad(2:end,:)+theta(2:end,:)*lambda; 
%regularizing gradient except the first gradient corresponding to theta1 
grad=grad./(m);




% =============================================================

end
