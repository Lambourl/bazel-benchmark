#include "bench/fib.hpp"

// RE Benchmark TU 6252 of 20000 (depth=28, stamp="default")
namespace bench_tu_6252 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6252>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6252
