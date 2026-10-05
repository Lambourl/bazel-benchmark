#include "bench/fib.hpp"

// RE Benchmark TU 19079 of 20000 (depth=28, stamp="default")
namespace bench_tu_19079 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19079>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19079
