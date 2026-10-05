#include "bench/fib.hpp"

// RE Benchmark TU 7191 of 20000 (depth=28, stamp="default")
namespace bench_tu_7191 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7191>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7191
