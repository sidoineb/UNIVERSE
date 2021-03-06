#include "realm.hpp"

class RealmPlusezed : public Realm {
  public:
    RealmPlusezed(int LoD, float * min, float * max);

  private:
    int getCoordsToNeighbourTop(int x, int y, int scale);
    int getCoordsToNeighbourBottom(int x, int y, int scale);
    int getCoordsToNeighbourLeft(int x, int y, int scale);
    int getCoordsToNeighbourRight(int x, int y, int scale);
};
