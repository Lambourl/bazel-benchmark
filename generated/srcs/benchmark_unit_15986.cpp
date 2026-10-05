#include "bench/fib.hpp"

// RE Benchmark TU 15986 of 20000 (depth=28, stamp="default")
namespace bench_tu_15986 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15986>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15986
