namespace SnailMVC;

interface AppInterface
{
    const VERSION = "1.0.0-dev";

    public function get(string pattern, callable handleFunc) -> <AppInterface>;

    public function post(string pattern, callable handleFunc) -> <AppInterface>;

    public function put(string pattern, callable handleFunc) -> <AppInterface>;

    public function head(string pattern, callable handleFunc) -> <AppInterface>;

    public function options(string pattern, callable handleFunc) -> <AppInterface>;

    public function delete(string pattern, callable handleFunc) -> <AppInterface>;

    public function any(string pattern, callable handleFunc) -> <AppInterface>;

    public function run() -> void;
    
}
