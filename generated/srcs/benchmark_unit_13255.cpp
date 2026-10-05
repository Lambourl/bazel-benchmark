#include "bench/fib.hpp"

// RE Benchmark TU 13255 of 20000 (depth=28, stamp="default")
namespace bench_tu_13255 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13255>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13255
