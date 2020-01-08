class Polygon
{
    constructor(sidelength)
    {
        let perimeter=0;
        for(let i in sidelength)
        {
            perimeter=perimeter+sidelength[i];
        }
        this.peri=perimeter;
    }
    perimeter()
    {
        return this.peri;
    }
}
