#include "bench/fib.hpp"

// RE Benchmark TU 4742 of 20000 (depth=28, stamp="default")
namespace bench_tu_4742 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4742>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4742
