class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter,
                      int x1, int y1, int x2, int y2) {

        int r = radius;
        int x = xCenter;
        int y = yCenter;

        int x3 = x1;
        int y3 = y2;

        int x4 = x2;
        int y4 = y1;

        
        int dc1 = (x - x1) * (x - x1) + (y - y1) * (y - y1);
        int dc2 = (x - x2) * (x - x2) + (y - y2) * (y - y2);
        int dc3 = (x - x3) * (x - x3) + (y - y3) * (y - y3);
        int dc4 = (x - x4) * (x - x4) + (y - y4) * (y - y4);

        
        if (dc1 <= r * r || dc2 <= r * r ||
            dc3 <= r * r || dc4 <= r * r) {
            return true;
        }

    
        if (y >= y1 && y <= y2) {
            int d1 = abs(x - x1);
            int d2 = abs(x - x2);

            if (d1 <= r || d2 <= r) {
                return true;
            }
        }

        
        if (x >= x1 && x <= x2) {
            int d1 = abs(y - y1);
            int d2 = abs(y - y2);

            if (d1 <= r || d2 <= r) {
                return true;
            }
        }

       
        if (x >= x1 && x <= x2 &&
            y >= y1 && y <= y2) {
            return true;
        }

        return false;
    }
};